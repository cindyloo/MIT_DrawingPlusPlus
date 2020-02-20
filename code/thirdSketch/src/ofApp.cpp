#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
    
    if (bOn) {
        
        
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    //line = line.getSmoothed(3);
    
    ofSetColor(255,255,255);
    

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
    class line tempLine;
    class line tempLineB;
    class line tempLineC;
    ofPoint start = ofPoint(mouseX,
                            mouseY);
    float distance = 50;
    float angle = 30; // ofRandom(0, PI);
    float angleB = 232;
    float angleC = -260;
    
    tempLine.a = start;
    tempLine.b = start + 100 * ofPoint(cos(angle),
                                            sin(angle));
    tempLineB.a = start + 20 * ofPoint(cos(angle),
                                       sin(angle)); //prev li
    tempLineB.b = start + distance * ofPoint(cos(angleB),
                                             sin(angleB));
    
    tempLineC.a = start + 20 * ofPoint(cos(angle),
                                       sin(angle)); //prev li
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
