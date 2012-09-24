#include "testApp.h"


/*=============================================
 REACTION DIFFUSION 
 GRAY SCOTT CHEMICAL REACTION DIFFUSION
 ----------------------------------------------
 [ testApp.mm ]
 ===============================================*/

/////////////////////////////////////
//  S E T U P
/////////////////////////////////////

void testApp::setup(){
    
    for (int y = 0; y < RESOLUTION; y++) {
        for (int x = 0; x < RESOLUTION; x++) {
            rdMesh.addColor(ofColor(0,ofRandom(255),0));
            rdMesh.addVertex(ofVec3f(x, y, 0));
        }
    }
    rdMesh.setMode(OF_PRIMITIVE_POINTS);
    

}

/////////////////////////////////////
//  U P D A T E
/////////////////////////////////////

void testApp::update(){
    
    for (int x = 0; x < RESOLUTION; x++) {
        for (int y = 0; y < RESOLUTION; y++) {
            if (y==0) {
                rdMesh.setColor(y*RESOLUTION+x, rdMesh.getColor((y+1)*RESOLUTION+x));
            } else if (y == RESOLUTION-1) {
                rdMesh.setColor(y*RESOLUTION+x, rdMesh.getColor((y-1)*RESOLUTION+x));

            } else if (x == 0) {
                rdMesh.setColor(y*RESOLUTION+x, rdMesh.getColor(y*RESOLUTION+x+1));

            } else if (x == RESOLUTION-1) {
                rdMesh.setColor(y*RESOLUTION+x, rdMesh.getColor(y*RESOLUTION+x-1));

            } else {
                rdMesh.setColor(y*RESOLUTION+x, rdMesh.getColor(y*RESOLUTION+x));
            }
        }
    }

}

/////////////////////////////////////
//  D R A W
/////////////////////////////////////

void testApp::draw(){
    ofBackground(ofColor::white);
    
    float scale = 2.0;
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofTranslate(-RESOLUTION/2*scale, -RESOLUTION/2*scale);
    ofScale(scale,scale);
    glPointSize(scale);
    rdMesh.drawVertices();
    



    
    
    
    

}

/////////////////////////////////////
//  I/O
/////////////////////////////////////

void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}