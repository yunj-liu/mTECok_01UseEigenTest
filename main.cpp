#include <QCoreApplication>
#include <iostream>
#include <Eigen/Dense>
using namespace std;
using Eigen::MatrixXd;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MatrixXd m(2,2);
    m(0,0) = 3;  //矩阵用圆括号加下标访问元素
    m(1,0) = 2.5;
    m(0,1) = -1;
    m(1,1) = m(1,0) + m(0,1);
    cout << m << endl;

    qDebug() << "done";

    return a.exec();
}
