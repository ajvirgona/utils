#ifndef CENTERING_H
#define CENTERING_H

#include <iostream>
#include <Eigen/Core>

using namespace Eigen;

inline void centering(Eigen::MatrixXd& V) {
    Eigen::Vector3d centroid = V.colwise().mean();
    V = V.rowwise() - centroid.transpose();
};

#endif