#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  
    x = ofGetWidth()*0.5;
    y = ofGetHeight()*0.5;
    speed = 10;
    velocityX = speed;
    velocityY = speed;

}

//--------------------------------------------------------------
void ofApp::update(){
    x = x + velocityX;
    if(x > ofGetWidth()){
        velocityX = -speed;
    } else if (x < 0){
        velocityX = speed;
    }
    
    y = y + velocityY;
    if(y > ofGetHeight()){
        velocityY = -speed;
    } else if (y < 0){
        velocityY = speed;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    ofDrawCircle(x, y, 10);
    

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
