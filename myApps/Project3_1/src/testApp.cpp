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
    ofCircle(ofGetWidth()*2/3, ofGetHeight()*2/3, 100);
    ofCircle(ofGetWidth()*2/3, ofGetHeight()*2/3, 100 + 20);
    ofCircle(ofGetWidth()*2/3, ofGetHeight()*2/3, 100 + 40);
    ofCircle(ofGetWidth()*2/3, ofGetHeight()*2/3, 100 + 60);
    ofCircle(ofGetWidth()*2/3, ofGetHeight()*2/3, 100 + 80);
    ofCircle(ofGetWidth()*2/3, ofGetHeight()*2/3, 100 + 100);

    ofSetColor(127, 255, 64, 127);
    ofCircle(ofGetWidth()/3, ofGetHeight()/3, 100);
    ofCircle(ofGetWidth()/3+10, ofGetHeight()/3+10, 100+20);
    ofCircle(ofGetWidth()/3+20, ofGetHeight()/3+20, 100+40);
    ofCircle(ofGetWidth()/3+30, ofGetHeight()/3+30, 100+60);
    ofCircle(ofGetWidth()/3+40, ofGetHeight()/3+40, 100+80);
    ofCircle(ofGetWidth()/3+50, ofGetHeight()/3+50, 100+100);
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
