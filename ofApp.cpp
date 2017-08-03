#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(30);
	ofBackground(0);
	ofSetWindowTitle("Insta");

	ofNoFill();

	this->noise_source = ofRandom(10);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	this->cam.begin();

	float tmp_noise_source = this->noise_source;
	float noise_step = 0.05;
	ofColor c;
	float step = 10;

	for (int i = 0; i < 256; i++) {
		c.setHsb(255 - 255 * ofNoise(tmp_noise_source), 255, 255);
		ofSetColor(c, 255 - i);

		//ofSetColor(255, 255 - i);

		ofPushMatrix();
		ofEllipse(ofVec3f(0, 0, ofMap(ofNoise(tmp_noise_source), 0, 1, -ofGetHeight() / 4, ofGetHeight() / 4)), i * step, i * step);

		tmp_noise_source -= noise_step;
		ofPopMatrix();
	}

	this->noise_source += noise_step * 0.5;

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
