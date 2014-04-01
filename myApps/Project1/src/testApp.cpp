#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(11, 24, 35);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(255, 0, 0);
    ofCircle(100.0, 100.0, 100.0);
    ofCircle(500.0, 500.0, 10.0);
    ofCircle(100.0, 500.0, 50.0);
    ofCircle(500.0, 100.0, 30.0);

    ofSetColor(0, 255, 0);
    ofLine(300.0, 300.0, 700.0, 300.0);

    ofSetColor(0, 0, 255);
    ofRect(220.0, 220.0, 100.0, 30.0);

    ofSetColor(47, 194, 203);
    ofEllipse(400.0, 400.0, 80.0, 180.0);

    ofSetColor(225, 25, 225);
    ofTriangle(100.0, 300.0, 100.0, 400.0, 200.0, 200.0);
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
