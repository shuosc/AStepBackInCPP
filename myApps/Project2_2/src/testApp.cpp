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
    // Ϊ�˷�ֹһ��ʼ�ͳ��磬������if�������߼���©����
    // �������ǽ�����Բ��λ������Ļ���м�
    loc_x = ofGetWidth()/2;
    loc_y = ofGetHeight()/2;
    loc_x_inc = 2;
    loc_y_inc = 3;
}

//--------------------------------------------------------------
void testApp::update(){
    loc_x += loc_x_inc;
    loc_y += loc_y_inc;

    // ����(loc_x, loc_y)��Բ�ĵ����꣬���ԣ����������Ҫ
    // ��Բ��������Ե��ʱ��ͷ�������ô������Ҫ�����Բ�ı�Ե
    // ��������С�Բ�ı�Ե����������Ӧ��loc_x + radius�Լ�loc_x - radius
    // ����y�����ơ�
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
