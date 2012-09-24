#pragma once
#include "ofMain.h"
#include <iostream>


/*=============================================
 REACTION DIFFUSION
 GRAY SCOTT CHEMICAL REACTION DIFFUSION
 
 a Biomodd [NYC4] experiment
 ----------------------------------------------
 
 -----------> PIETER STEYAERT  & HANNAH PINSON || 18/09/2012
 ----------->				     
 -----------> Additional Information: TO DO
 ===============================================*/

#define RESOLUTION 100

class testApp : public ofBaseApp{
	public:
    
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        ofMesh rdMesh;


       /* float activatorD; // diffusion
        float inhibitorD; // diffusion

        float activatorA; // how fast the ativator is added to the system
        float inhibitorR; // how fast the inhibitor is removed from the system*/
    

};
