/**
* @file Scene.cpp
*/
#include "Scene.h"
#include <iostream>

/**
* コンストラクタ.
*
* @param name シーン名.
*/
Scene::Scene(const char* name) :name(name)
{
	std::cout << "Scene コンストラクタ:" << name << "/n";
}

/**
* デストラクタ
*/
Scene::~Scene()
{
	Finalize();
	std::cout << "Scene デストラクタ:" << name << "/n";
}

/**
* シーンを活動状態にする.
*/
void Scene::Play()
{
	IsActive = true;
	std::cout << "Scene Play:" << name << "/n";
}

/**
* シーンを停止にする.
*/
void Scene::Stop()
{
	IsActive = false;
	std::cout << "Scene Stop:" << name << "/n";
}

/**
* シーンを表示する.
*/
void Scene::Show()
{
	IsVisible = true;
	std::cout << "Scene Show:" << name << "/n";
}

/**
* シーンを非表示にする.
*/
void Scene::Hide()
{
	IsVisible = false;
	std::cout << "Scene Hide:" << name << "/n";
}

/**
* シーン名を取得する.
*
* @return シーン名.
*/
const std::string& Scene::Name()const
{
	return name;
}

/**
* シーンの活動状態を調べる.
*
* @retval true  活動している.
* @retval false 停止している.
*/
bool Scene::IsActive()const
{
	return IsVisible;
}