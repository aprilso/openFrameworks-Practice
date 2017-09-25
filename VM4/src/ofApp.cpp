#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(255,255,255);
    ofSetColor(0, 0, 0);
    ofNoFill();
    ofSeedRandom(100); //so it doesn't animate
    
    float centerx;
    float centery;
    float square;
    
    for (int i = 0; i < 30; i++){
//        for (int j = 0; j < 5; j++){
            ofDrawRectangle(centerx-(0.5*i*square), centery-(0.5*i*square)+ofRandom(20, 100),i*square,i*square);
            
            
            
            centerx = ofGetWidth()/2;
            centery = ofGetHeight()/2;
            square = 20;  //(ofRandom(20)*10);
            
//        }
    }
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
