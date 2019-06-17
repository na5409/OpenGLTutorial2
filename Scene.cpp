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
}

/**
* デストラクタ
*/
Scene::~Scene()
{
	Finalize();
}

/**
* シーンを活動状態にする.
*/
void Scene::Play()
{
	IsActive = true;
}

/**
* シーンを停止にする.
*/
void Scene::Stop()
{
	IsActive = false;
}

/**
* シーンを表示する.
*/
void Scene::Show()
{
	IsVisible = true;
}

/**
* シーンを非表にする.
*/
void Scene::Hide()
{
	IsVisible = false;
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