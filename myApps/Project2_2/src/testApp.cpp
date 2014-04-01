#include "testApp.h"

float radius;
float loc_x, loc_y;
float loc_x_inc, loc_y_inc;

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(11, 24, 35);
    ofSetFrameRate(60);
    ofSetCircleResolution(64);

    radius = 40;
    // 为了防止一开始就出界，而导致if中条件逻辑的漏洞，
    // 所以我们将设置圆的位置在屏幕的中间
    loc_x = ofGetWidth()/2;
    loc_y = ofGetHeight()/2;
    loc_x_inc = 2;
    loc_y_inc = 3;
}

//--------------------------------------------------------------
void testApp::update(){
    loc_x += loc_x_inc;
    loc_y += loc_y_inc;

    // 由于(loc_x, loc_y)是圆心的坐标，所以，如果我们想要
    // 让圆在碰到边缘的时候就反弹，那么我们需要计算出圆的边缘
    // 的坐标才行。圆的边缘的坐标是相应的loc_x + radius以及loc_x - radius
    // 对于y轴相似。
    if(loc_x + radius > ofGetWidth() || loc_x - radius < 0)
        loc_x_inc = -loc_x_inc;
    if(loc_y + radius > ofGetHeight() || loc_y - radius < 0)
        loc_y_inc = -loc_y_inc;
}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(31, 63, 255);
    ofCircle(loc_x, loc_y, radius);
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
