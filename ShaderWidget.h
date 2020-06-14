#pragma once
#pragma comment (lib, "opengl32.lib")
//#include <QOpenGLWidget>
#include <QtOpenGL>
#include <QOpenGLFunctions_4_3_Core>
#include "RayStructs.h"



class ShaderWidget : public QOpenGLWidget
{
private:
	QOpenGLShaderProgram shaderProg;

	GLfloat* vertData;
	int vert_data_location;

	Sphere* Spheres;
	int sizeSpheres;
	Camera cam;
	QVector3D light_pos;


	QPoint m_lastPos;

protected:
	void initializeGL() override;
	void resizeGL(int nWidth, int nHeight) override;
	void paintGL() override;

public:
	ShaderWidget(QWidget* parent = 0);
	~ShaderWidget();

public slots:
	void keyPressEvent(QKeyEvent* event) override;
	void mouseMoveEvent(QMouseEvent* event) override;
	void mousePressEvent(QMouseEvent* event) override;
};