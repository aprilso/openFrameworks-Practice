#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    float time = ofGetElapsedTimef();
    
    //
    
//    if (time < 4) {
//        for (int i = 0; i < (ofGetWidth()/2); i++){
//            for(int j = 0; j < 10; j++){
//                ofDrawCircle(i*ofGetHeight()/10, j*ofGetHeight()/10, ofRandom(100));
//            }
//        }
//    }
//    else {
//        for (int i = 0; i < (ofGetWidth()/10); i++){
//            for(int j = 0; j < 10; j++){
//                ofDrawCircle(i*ofGetHeight()/10, j*ofGetHeight()/10,10);
//            }
//        }
//    }
    
 

    float randomness = 0;
    float partycolor = 0;
    ofBackground(255, 255, 255);
  
    
    if (mouseX > ofGetWidth() || mouseX < 0 || mouseY > ofGetHeight() || mouseY <0 ){
        randomness = ofMap(sin(time)+0.5, -1, 1, 0, 1);
        partycolor = ofRandom (255);
        
    }
    ofSetColor(partycolor, 0, 100);
    
    for (int i = 0; i < (ofGetWidth()/2); i++){
        for(int j = 0; j < 10; j++){
            float radius = 8 + ofRandom(80)*randomness;
            ofDrawCircle(i*ofGetHeight()/10, j*ofGetHeight()/10, radius);
        }
    }
    

    
    
        
//    for (int k = 0; k < (ofGetWidth()/4); k++ ){
//        for
//        ofDrawCircle(k*ofGetHeight()/10, 10, k*sin(time));
//    }
    
  
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
