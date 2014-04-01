#include "testApp.h"

float loc_x, loc_y;

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(11, 24, 35);
    ofSetFrameRate(60);
    ofSetCircleResolution(64);

    loc_x = 0;
    loc_y = 0;
}

//--------------------------------------------------------------
void testApp::update(){
    loc_x += 3;
    loc_y += 2;

    if(loc_x > ofGetWidth())
        loc_x = 0;
    if(loc_y > ofGetHeight())
        loc_y = 0;
}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(31, 63, 255);
    ofCircle(loc_x, loc_y, 40);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

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
