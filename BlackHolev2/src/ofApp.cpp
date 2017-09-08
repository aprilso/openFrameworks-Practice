#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    for (int i = 0; i <100; i++){
        colors[i].set(255);
        
    }

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(100);
    ofFill();
    ofSetColor(255);
    
    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            
            float x = i*ofGetHeight()/10;
            float y = j*ofGetHeight()/10;
            float distance = ofDist(x,y, mouseX, mouseY);
            if (distance < 50){
                colors[ j * 10 + i ].set(0);
            }
            
            ofSetColor(colors[ j * 10 + i ]);
            
            float radius = 8;
            ofDrawCircle(i*ofGetHeight()/10, j*ofGetHeight()/10, radius);
        }
    }
    float radius = 50;
    ofSetColor(0);
    ofDrawCircle(mouseX, mouseY, radius);
    
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    for (int i = 0; i <100; i++){
        colors[i].set(255);
        
    }
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
