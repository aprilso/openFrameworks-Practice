#pragma once

#include "ofMain.h"


class Particle{
public: 
    float x;
    float y;
    float velocityX;
    float velocityY;
    float speed;
    float radius; //it's a public class variable
    
    void setup(){
        x = ofGetWidth()*0.5;
        y = ofGetHeight()*0.5;
        speed = 10;
        velocityX = speed;
        velocityY = speed;
        radius = 20;
    }
    void update(){
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
        radius = radius + sin(ofGetElapsedTimef());
        
    }
    void draw(){
        ofDrawCircle(x, y, radius);
    }
};

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    Particle myparticle; //class is Particle, myparticle is the object. Class is the larger thing
    
    
};
