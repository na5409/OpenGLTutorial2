/**
* @file Scene.cpp
*/
#include "Scene.h"
#include <iostream>

/**
* �R���X�g���N�^.
*
* @param name �V�[����.
*/
Scene::Scene(const char* name) :name(name)
{
	std::cout << "Scene �R���X�g���N�^:" << name << "/n";
}

/**
* �f�X�g���N�^
*/
Scene::~Scene()
{
	Finalize();
	std::cout << "Scene �f�X�g���N�^:" << name << "/n";
}

/**
* �V�[����������Ԃɂ���.
*/
void Scene::Play()
{
	IsActive = true;
	std::cout << "Scene Play:" << name << "/n";
}

/**
* �V�[�����~�ɂ���.
*/
void Scene::Stop()
{
	IsActive = false;
	std::cout << "Scene Stop:" << name << "/n";
}

/**
* �V�[����\������.
*/
void Scene::Show()
{
	IsVisible = true;
	std::cout << "Scene Show:" << name << "/n";
}

/**
* �V�[�����\���ɂ���.
*/
void Scene::Hide()
{
	IsVisible = false;
	std::cout << "Scene Hide:" << name << "/n";
}

/**
* �V�[�������擾����.
*
* @return �V�[����.
*/
const std::string& Scene::Name()const
{
	return name;
}

/**
* �V�[���̊�����Ԃ𒲂ׂ�.
*
* @retval true  �������Ă���.
* @retval false ��~���Ă���.
*/
bool Scene::IsActive()const
{
	return IsVisible;
}