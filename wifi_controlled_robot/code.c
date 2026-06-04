#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <ArduinoOTA.h>

int enA = D1;
int in1 = D2;
int in2 = D3;
int in3 = D4;
int in4 = D5;
int enB = D6;

String command;
int SPEED = 1023;

ESP8266WebServer server(80);

unsigned long previousMillis = 0;
String sta_ssid = "";
String sta_password = "";

void setup() {
  Serial.begin(115200);

  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enB, OUTPUT);

  analogWrite(enA, SPEED);
  analogWrite(enB, SPEED);

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);

  String chip_id = String(ESP.getChipId(), HEX);
  chip_id = "wificar-" + chip_id.substring(chip_id.length() - 4);
  String hostname(chip_id);

  WiFi.mode(WIFI_STA);
  WiFi.begin(sta_ssid.c_str(), sta_password.c_str());

  unsigned long currentMillis = millis();
  previousMillis = currentMillis;

  while (WiFi.status() != WL_CONNECTED &&
         currentMillis - previousMillis <= 10000) {
    delay(500);
    currentMillis = millis();
  }

  if (WiFi.status() != WL_CONNECTED) {
    WiFi.mode(WIFI_AP);
    WiFi.softAP(hostname.c_str());
  }

  server.on("/", HTTP_handleRoot);
  server.onNotFound(HTTP_handleRoot);

  server.begin();
  ArduinoOTA.begin();
}

void loop() {
  ArduinoOTA.handle();
  server.handleClient();

  command = server.arg("State");

  if (command == "F") {
    Forward();
  }
  else if (command == "B") {
    Backward();
  }
  else if (command == "R") {
    TurnRight();
  }
  else if (command == "L") {
    TurnLeft();
  }
}

void HTTP_handleRoot() {
  server.send(200, "text/html", "");

  if (server.hasArg("State")) {
    Serial.println(server.arg("State"));
  }
}

void Forward() {
  analogWrite(enA, SPEED);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, SPEED);
}

void Backward() {
  analogWrite(enA, SPEED);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enB, SPEED);
}

void TurnRight() {
  analogWrite(enA, SPEED);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, SPEED);
}

void TurnLeft() {
  analogWrite(enA, SPEED);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enB, SPEED);
}
