#include <iostream>
#include <ctime>
#include <cmath>
#include <eigen3/Eigen/Eigen>
#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/Geometry>

#include "libHelloSLAM.h"

using namespace std;

#define MATRIX_SIZE 128



int main() {
    cout << "Hello Eigen!" << endl;

    Eigen::Matrix3d rotation_matrix = Eigen::Matrix3d::Identity();

    Eigen::AngleAxisd rotation_vector(M_PI/4, Eigen::Vector3d(0, 0, 1));
    cout.precision(3);

    // cout << "totation_matrix = " << rotation_vector.matrix() << endl;

    rotation_matrix = rotation_vector.toRotationMatrix();

    Eigen::Vector3d v(1, 0, 0);
    Eigen::Vector3d v_rotation = rotation_vector * v;
    // cout << "(1, 0, 0) after rotation (by angle axis) = " << v_rotation.transpose() << endl;

    v_rotation = rotation_matrix * v;
    // cout << "(1, 0, 0) after rotation (by matrix) = " << v_rotation.transpose() << endl;


    Eigen::Vector3d euler_angle = rotation_matrix.eulerAngles(2, 1, 0);
    // cout << "yaw pitch roll:" << euler_angle << endl;

    Eigen::Isometry3d T = Eigen::Isometry3d::Identity();
    T.rotate(rotation_vector);git 
    cout << endl;
    T.pretranslate(Eigen::Vector3d(1, 3, 4));














    

    


    
    printfSLAM();



    return 0;
}





