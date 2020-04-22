#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    //line = line.getSmoothed(3);
    
    ofSetColor(255,255,255);
    
    
    if (bOn) {
        
        class line tempLine;
        class line tempLineB;
        class line tempLineC;
        ofPoint start = ofPoint(mouseX,
                                mouseY);
        float distance = 30;
        float angle = ofRandom(0, PI);
        float angleB = angle -20;
        float angleC = angle + 20;
        
        tempLine.a = start;
        tempLine.b = start + distance * ofPoint(cos(angle),
                                                sin(angle));
        tempLineB.a = start;
        tempLineB.b = start + distance * ofPoint(cos(angleB),
                                                sin(angleB));
        
        tempLineC.a = start;
        tempLineC.b = start + distance * ofPoint(cos(angleC),
                                                sin(angleC));
        
        ofPolyline footprint;

        footprint.addVertex(tempLine.a);
        footprint.addVertex(tempLine.b);
        footprint.addVertex(tempLine.a);
        footprint.addVertex(tempLineB.a);
        footprint.addVertex(tempLineB.b);
        footprint.addVertex(tempLineB.a);
        footprint.addVertex(tempLineC.a);
        footprint.addVertex(tempLineC.b);
        footprint.addVertex(tempLineC.a);
        
        
        
        myLines.push_back(footprint);
    }
    for (int i = 0; i < myLines.size(); i++){
        myLines[i].draw();
    }
        
    
    
    //ofPolyline resampled = line.getResampledBySpacing(20);
    //for (int i = 0; i < resampled.size(); i++){
        //ofDrawCircle(resampled[i], 10);
    //}
    //ofSetColor(0,255,0);
    //resampled.draw();
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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

    //line.clear();
    bOn = true;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    bOn = false;
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
