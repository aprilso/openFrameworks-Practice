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
    ofSeedRandom(0); //so it doesn't animate

    
    float centerx;
    float centery;
    float square;
    
    float square2;
    float sq3;
    float sq4;
    
    
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            ofDrawRectangle(centerx, centery, i*square, j*square);
        

    
    centerx = ofGetWidth()/2;
    centery = ofGetHeight()/2 + ofRandom(300);
    square = ofRandom(200);
    square2 = 400;
    sq3 = ofRandom(150);
    sq4 = 300;
    
    
    
    
    ofDrawRectangle(centerx-(0.5*square), centery-(0.5*square), square, square);
    ofDrawRectangle(centerx-(0.5*square2), centery-(0.5*square2), square2, square2);
    ofDrawRectangle(centerx-(0.5*sq3), centery-(0.5*sq3), sq3, sq3);
    ofDrawRectangle(centerx-(0.5*sq4), centery-(0.5*sq4), sq4, sq4);
   
        }
    }
    
//      for (int i = 0; i < 10; i++){
//            for (int j = 0; j < 10; j++){
//    ofDrawRectangle(centerx, centery, i*square, j*square);
//
//      }
//      }
//  
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
