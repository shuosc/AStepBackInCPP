#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(11, 24, 35);
    ofEnableAlphaBlending(); // 使透明度有效
    ofSetCircleResolution(64); // 使用64个点来画一个圆

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(255, 127, 64, 127);
    float radius1 = 100;
    while(radius1 < 200) {
        ofCircle(ofGetWidth()*2/3, ofGetHeight()*2/3, radius1);
        radius1 = radius1 + 20;
    }

    ofSetColor(127, 255, 64, 127);
    float x2add = 0, y2add = 0;
    float radius2 = 100;
    for(int i = 0; i < 6; ++i) {
        ofCircle(ofGetWidth()/3+x2add, ofGetHeight()/3+y2add, radius2);
        x2add += 10;
        y2add += 10;
        radius2 += 20;
    }
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
