#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(30);
	ofBackground(0);
	ofSetWindowTitle("Insta");

	ofNoFill();

	this->size = 20;

	for (int i = 0; i < this->size; i++) {
		this->angle_log_1.push_back(0);
		this->angle_log_2.push_back(0);
	}
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	this->cam.begin();

	float angle_1 = (float)ofGetMouseX() / (float)ofGetWidth() * 360.f;
	float angle_2 = (float)ofGetMouseY() / (float)ofGetHeight() * 360.f;

	this->angle_log_1.push_back(angle_1);
	this->angle_log_2.push_back(angle_2);

	this->angle_log_1.erase(this->angle_log_1.begin());
	this->angle_log_2.erase(this->angle_log_2.begin());

	float span = 50;
	for (int i = this->size; i > 0; i--) {
		ofSetColor(255, 255 - i);

		ofPushMatrix();
		ofRotateY(this->angle_log_1[this->size - i]);
		ofRotateX(this->angle_log_2[this->size - i]);
		ofEllipse(ofVec3f(0, 0, 0), i * span, i * span);

		ofPopMatrix();
	}

	this->cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
