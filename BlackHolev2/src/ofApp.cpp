#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    for (int i = 0; i <100; i++){
        colors[i].set(255);
    }
    float square;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(100);
    ofFill();
    ofSetColor(255);
    
    float square2 = 30;
    
    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            
            float x = i*ofGetHeight()/10;
            float y = j*ofGetHeight()/10;
            float distance = ofDist(x,y, mouseX, mouseY);
          
            ofSetColor(colors[ j * 10 + i ]);
        
            float square = 0.3*(square2);
            
            if (distance < (3*square2)){
                colors[ j * 10 + i ].set(0);
                square = 0.7*(square2);
            }
            ofDrawRectangle(i*ofGetHeight()/10, j*ofGetHeight()/10, square, square);
        }
    }
    
//    ofSetColor(0);
//    ofDrawRectangle(mouseX, mouseY, square2, square2);
//    
//    ofDrawRectangle(mouseX+10, mouseY+10, 40, 40);
    
    
    
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
