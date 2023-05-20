#pragma once
#include "CrabGameSDK.h"

namespace UnityEngine {
	typedef struct Behaviour;
	typedef struct Bounds;
	typedef struct Camera;
	typedef struct Collider;
	typedef struct Color;
	typedef struct Component;
	typedef struct Cursor;
	typedef struct GameObject;
	typedef struct Material;
	typedef struct MonoBehaviour;
	typedef struct Object;
	typedef struct Physics;
	typedef struct Quaternion;
	typedef struct Ray;
	typedef struct RaycastHit;
	typedef struct Renderer;
	typedef struct Resolution;
	typedef struct Rigidbody;
	typedef struct Screen;
	typedef struct Shader;
	typedef struct Transform;
	typedef void* Type;

	struct Behaviour : Component {
		static Behaviour* _Behaviour() {
			static const auto func = (Behaviour * (*)())(CrabGameSDK::GameAssembly + 0x54D410);
			return func();
		}

		bool get_enabled() {
			static const auto func = (bool(*)(Behaviour*))(CrabGameSDK::GameAssembly + 0x54D470);
			return func(this);
		}

		void set_enabled(const bool& enabled) {
			static const auto func = (void(*)(Behaviour*, bool))(CrabGameSDK::GameAssembly + 0x54D4F0);
			return func(this, enabled);
		}

		bool get_isActiveAndEnabled() {
			static const auto func = (bool(*)(Behaviour*))(CrabGameSDK::GameAssembly + 0x54D4B0);
			return func(this);
		}
	};

	struct Bounds {
		Bounds() = delete;
		static Bounds* _Bounds(const Vector3& center, const Vector3& size) {
			static const auto func = (Bounds * (*)(Vector3, Vector3))(CrabGameSDK::GameAssembly + 0x54DD00);
			return func(center, size);
		}

		Vector3 m_Center;
		Vector3 m_Extents;

		int GetHashCode() {
			static const auto func = (int(*)(Bounds*))(CrabGameSDK::GameAssembly + 0x54D9D0);
			return func(this);
		}

		bool Equals(Type other) {
			static const auto func = (bool(*)(Bounds*, Type))(CrabGameSDK::GameAssembly + 0x54D820);
			return func(this, other);
		}

		bool Equals(Bounds* other) {
			static const auto func = (bool(*)(Bounds*, Bounds*))(CrabGameSDK::GameAssembly + 0x54D930);
			return func(this, other);
		}

		Vector3 get_center() {
			static const auto func = (Vector3(*)(Bounds*))(CrabGameSDK::GameAssembly + 0x38C850);
			return func(this);
		}

		void set_center(const Vector3& center) {
			static const auto func = (void(*)(Bounds*, Vector3))(CrabGameSDK::GameAssembly + 0x392140);
			return func(this, center);
		}

		Vector3 get_size() {
			static const auto func = (Vector3(*)(Bounds*))(CrabGameSDK::GameAssembly + 0x54DE70);
			return func(this);
		}

		void set_size(const Vector3& size) {
			static const auto func = (void(*)(Bounds*, Vector3))(CrabGameSDK::GameAssembly + 0x54E030);
			return func(this, size);
		}

		Vector3 get_extents() {
			static const auto func = (Vector3(*)(Bounds*))(CrabGameSDK::GameAssembly + 0x3920F0);
			return func(this);
		}

		void set_extents(const Vector3& extents) {
			static const auto func = (void(*)(Bounds*, Vector3))(CrabGameSDK::GameAssembly + 0x54E020);
			return func(this, extents);
		}

		Vector3 get_min() {
			static const auto func = (Vector3(*)(Bounds*))(CrabGameSDK::GameAssembly + 0x54DDF0);
			return func(this);
		}

		Vector3 get_max() {
			static const auto func = (Vector3(*)(Bounds*))(CrabGameSDK::GameAssembly + 0x54DD70);
			return func(this);
		}

		bool operator==(Bounds* rhs) {
			static const auto func = (bool(*)(Bounds*, Bounds*))(CrabGameSDK::GameAssembly + 0x54DED0);
			return func(this, rhs);
		}

		bool operator!=(Bounds* rhs) {
			static const auto func = (bool(*)(Bounds*, Bounds*))(CrabGameSDK::GameAssembly + 0x54DF70);
			return func(this, rhs);
		}

		void SetMinMax(const Vector3& min, const Vector3& max) {
			static const auto func = (void(*)(Bounds*, Vector3, Vector3))(CrabGameSDK::GameAssembly + 0x54DA30);
			return func(this, min, max);
		}

		void Encapsulate(const Vector3& point) {
			static const auto func = (void(*)(Bounds*, Vector3))(CrabGameSDK::GameAssembly + 0x54D6B0);
			return func(this, point);
		}

		std::string ToString() {
			static const auto func = (generic_string * (*)(Bounds*))(CrabGameSDK::GameAssembly + 0x54DC80);
			return il2cpp::generic_to_string(func(this));
		}
	};

	struct Camera : Component {
		Camera() = delete;
		static Camera* _Camera() {
			static const auto func = (Camera * (*)())(CrabGameSDK::GameAssembly + 0x54D410);
			return func();
		}

		static Camera* get_main() {
			static const auto func = (Camera * (*)())(CrabGameSDK::GameAssembly + 0x54F330);
			return func();
		}

		static Camera* get_current() {
			static const auto func = (Camera * (*)())(CrabGameSDK::GameAssembly + 0x54F1C0);
			return func();
		}

		enum class MonoOrStereoscopicEye {
			Left,
			Right,
			Mono
		};

		float get_fieldOfView() {
			static const auto func = (float(*)(Camera*))(CrabGameSDK::GameAssembly + 0x54F2F0);
			return func(this);
		}

		void set_fieldOfView(const float& fieldOfView) {
			static const auto func = (void(*)(Camera*, float))(CrabGameSDK::GameAssembly + 0x54FBE0);
			return func(this, fieldOfView);
		}

		Ray ScreenPointToRay(const Vector3& pos) {
			static const auto func = (Ray(*)(Camera*, Vector3))(CrabGameSDK::GameAssembly + 0x54EAE0);
			return func(this, pos);
		}

		Ray ScreenPointToRay(const Vector2& pos, const MonoOrStereoscopicEye& eye) {
			static const auto func = (Ray(*)(Camera*, Vector2, MonoOrStereoscopicEye))(CrabGameSDK::GameAssembly + 0x54EB90);
			return func(this, pos, eye);
		}

		Vector3 WorldToScreenPoint(const Vector3& position) {
			static const auto func = (Vector3(*)(Camera*, Vector3))(CrabGameSDK::GameAssembly + 0x54EE40);
			return func(this, position);
		}

		Vector3 WorldToScreenPoint(const Vector3& position, const MonoOrStereoscopicEye& eye) {
			static const auto func = (Vector3(*)(Camera*, Vector3, MonoOrStereoscopicEye))(CrabGameSDK::GameAssembly + 0x54EDD0);
			return func(this, position, eye);
		}

		void Render() {
			static const auto func = (void(*)(Camera*))(CrabGameSDK::GameAssembly + 0x54E8F0);
			return func(this);
		}

		void CopyFrom(Camera* other) {
			static const auto func = (void(*)(Camera*, Camera*))(CrabGameSDK::GameAssembly + 0x54E340);
			return func(this, other);
		}
	};

	struct Collider : Component {
		Collider() = delete;
		static Collider* _Collider() {
			static const auto func = (Collider * (*)())(CrabGameSDK::GameAssembly + 0x264FC0);
			return func();
		}

		bool get_enabled() {
			static const auto func = (bool(*)(Collider*))(CrabGameSDK::GameAssembly + 0x9870B0);
			return func(this);
		}

		void set_enabled(const bool& enabled) {
			static const auto func = (void(*)(Collider*, bool))(CrabGameSDK::GameAssembly + 0x9870F0);
			return func(this, enabled);
		}

		Rigidbody* get_attachedRigidbody() {
			static const auto func = (Rigidbody * (*)(Collider*))(CrabGameSDK::GameAssembly + 0x986FC0);
			return func(this);
		}

		void set_isTrigger(const bool& isTrigger) {
			static const auto func = (void(*)(Collider*, bool))(CrabGameSDK::GameAssembly + 0x987140);
			return func(this, isTrigger);
		}

		Vector3 ClosestPoint(const Vector3& position) {
			static const auto func = (Vector3(*)(Collider*, Vector3))(CrabGameSDK::GameAssembly + 0x986E80);
			return func(this, position);
		}

		Bounds* get_bounds() {
			static const auto func = (Bounds * (*)(Collider*))(CrabGameSDK::GameAssembly + 0x987050);
			return func(this);
		}

		void set_material(Material* material) {
			static const auto func = (void(*)(Collider*, Material*))(CrabGameSDK::GameAssembly + 0x987190);
			return func(this, material);
		}

		Vector3 ClosestPointOnBounds(const Vector3& position) {
			static const auto func = (Vector3(*)(Collider*, Vector3))(CrabGameSDK::GameAssembly + 0x986D70);
			return func(this, position);
		}
	};

	struct Color {
		float x;
		float y;
		float z;
		float w;
	};

	struct Component : Object {
		static Component* _Component() {
			static const auto func = (Component * (*)())(CrabGameSDK::GameAssembly + 0x54D410);
			return func();
		}

		Transform* get_transform() {
			static const auto func = (Transform * (*)(Component*))(CrabGameSDK::GameAssembly + 0x5545A0);
			return func(this);
		}

		GameObject* get_gameObject() {
			static const auto func = (GameObject * (*)(Component*))(CrabGameSDK::GameAssembly + 0x5544F0);
			return func(this);
		}

		Component* GetComponent(Type type) {
			static const auto func = (Component * (*)(Component*, Type))(CrabGameSDK::GameAssembly + 0x554410);
			return func(this, type);
		}

		Component* GetComponent(const std::string& type) {
			static const auto func = (Component * (*)(Component*, generic_string*))(CrabGameSDK::GameAssembly + 0x554410);
			return func(this, il2cpp::string_to_generic(type));
		}

		Component* GetComponentInChildren(const std::string& type, bool includeInactive) {
			static const auto func = (Component * (*)(Component*, Type, bool))(CrabGameSDK::GameAssembly + 0x554300);
			return func(this, il2cpp::get_type(type), includeInactive);
		}

		Component* GetComponentInParent(const std::string& type) {
			static const auto func = (Component * (*)(Component*, Type))(CrabGameSDK::GameAssembly + 0x554390);
			return func(this, il2cpp::get_type(type));
		}

		template<typename T>
		generic_array_t<T*>* GetComponents(const std::string& type, const bool& includeInactive = false) {
			return get_gameObject()->GetComponents<T>(type, includeInactive);
		}

		template<typename T>
		generic_array_t<T*>* GetComponentsInChildren(const std::string& type, const bool& includeInactive = false) {
			return get_gameObject()->GetComponentsInChildren<T>(type, includeInactive);
		}

		template<typename T>
		generic_array_t<T*>* GetComponentsInParents(const std::string& type, const bool& includeInactive = false) {
			return get_gameObject()->GetComponenstInParent<T>(type, includeInactive);
		}

		std::string get_tag() {
			static const auto func = (generic_string * (*)(Component*))(CrabGameSDK::GameAssembly + 0x554530);
			return il2cpp::generic_to_string(func(this));
		}

		bool CompareTag(const std::string& tag) {
			static const auto func = (bool(*)(Component*, generic_string*))(CrabGameSDK::GameAssembly + 0x554220);
			return func(this, il2cpp::string_to_generic(tag));
		}
	};

	struct Cursor {
		Cursor() = delete;
		enum CursorLockMode : int {
			None,
			Locked,
			Confined
		};

		static bool get_visible() {
			static const auto func = (bool(*)())(CrabGameSDK::GameAssembly + 0x555C20);
			return func();
		}

		static void set_visible(const bool& visible) {
			static const auto func = (void(*)(bool))(CrabGameSDK::GameAssembly + 0x555C90);
			return func(visible);
		}

		static bool get_lockState() {
			static const auto func = (int(*)())(CrabGameSDK::GameAssembly + 0x555BF0);
			return func();
		}

		static void set_lockState(const int& lockState) {
			static const auto func = (void(*)(int))(CrabGameSDK::GameAssembly + 0x555C50);
			return func(lockState);
		}
	};

	struct GameObject : Object {
		GameObject() = delete;
		static GameObject* _GameObject() {
			static const auto func = (GameObject * (*)())(CrabGameSDK::GameAssembly + 0x558570);
			return func();
		}

		static GameObject* _GameObject(const std::string& name) {
			static const auto func = (GameObject * (*)(generic_string*))(CrabGameSDK::GameAssembly + 0x5585F0);
			return func(il2cpp::string_to_generic(name));
		}

		Component* GetComponent(const std::string& type) {
			static const auto func = (Component * (*)(GameObject*, Type))(CrabGameSDK::GameAssembly + 0x558230);
			return func(this, il2cpp::get_type(type));
		}

		Component* GetComponentFastPath(const std::string& type, uintptr_t oneFurtherThanResultValue) {
			static const auto func = (Component * (*)(GameObject*, Type, uintptr_t))(CrabGameSDK::GameAssembly + 0x5580C0);
			return func(this, il2cpp::get_type(type), oneFurtherThanResultValue);
		}

		Component* GetComponentInChildren(const std::string& type, bool includeInactive) {
			static const auto func = (Component * (*)(GameObject*, Type, bool))(CrabGameSDK::GameAssembly + 0x558120);
			return func(this, il2cpp::get_type(type), includeInactive);
		}

		Component* GetComponentInParent(const std::string& type, bool includeInactive) {
			static const auto func = (Component * (*)(GameObject*, Type, bool))(CrabGameSDK::GameAssembly + 0x558180);
			return func(this, il2cpp::get_type(type), includeInactive);
		}

		Component* GetComponentInParent(const std::string& type) {
			static const auto func = (Component * (*)(GameObject*, Type))(CrabGameSDK::GameAssembly + 0x5581E0);
			return func(this, il2cpp::get_type(type));
		}

		Component* AddComponent(const std::string& componentType) {
			static const auto func = (Component * (*)(GameObject*, Type))(CrabGameSDK::GameAssembly + 0x557FE0);
			return func(this, il2cpp::get_type(componentType));
		}

		Transform* get_transform() {
			static const auto func = (Transform * (*)(GameObject*))(CrabGameSDK::GameAssembly + 0x558780);
			return func(this);
		}

		int get_layer() {
			static const auto func = (int(*)(GameObject*))(CrabGameSDK::GameAssembly + 0x558700);
			return func(this);
		}

		void set_layer(const int& layer) {
			static const auto func = (void(*)(GameObject*, int))(CrabGameSDK::GameAssembly + 0x5587C0);
			return func(this, layer);
		}

		void SetActive(const bool& value) {
			static const auto func = (void(*)(GameObject*, bool))(CrabGameSDK::GameAssembly + 0x5583C0);
			return func(this, value);
		}

		bool get_activeSelf() {
			static const auto func = (bool(*)(GameObject*))(CrabGameSDK::GameAssembly + 0x5586C0);
			return func(this);
		}

		std::string get_tag() {
			static const auto func = (generic_string * (*)(GameObject*))(CrabGameSDK::GameAssembly + 0x558740);
			return il2cpp::generic_to_string(func(this));
		}

		template<typename T>
		generic_array_t<T*>* GetComponents(const std::string& type, const bool& includeInactive = true) {
			return GetComponentsInternal<T>(type, true, false, includeInactive, false, nullptr);
		}

		template<typename T>
		generic_array_t<T*>* GetComponentsInChildren(const std::string& type, const bool& includeInactive = false) {
			return GetComponentsInternal<T>(type, true, true, includeInactive, false, nullptr);
		}

		template<typename T>
		generic_array_t<T*>* GetComponentsInParents(const std::string& type, const bool& includeInactive = false) {
			return GetComponentsInternal<T>(type, true, true, includeInactive, true, nullptr);
		}

		bool CompareTag(const std::string& tag) {
			static const auto func = (bool(*)(GameObject*, generic_string*))(CrabGameSDK::GameAssembly + 0x558030);
			return func(this, il2cpp::string_to_generic(tag));
		}

	private:
		template<typename T>
		generic_array_t<T*>* GetComponentsInternal(const std::string& type, const bool& useSearchTypeAsArrayReturnType, const bool& recursive, const bool& includeInactive, const bool& reverse, void* resultList) {
			static const auto func = (generic_array_t<T*>*(*)(GameObject*, Type, bool, bool, bool, bool, void*))(CrabGameSDK::GameAssembly + 0x558280);
			return func(this, il2cpp::get_type(type), useSearchTypeAsArrayReturnType, recursive, includeInactive, includeInactive, resultList);
		}
	};

	struct Material {
		Material() = delete;
		static Material* _Material() {
			static const auto func = (Material * (*)())(CrabGameSDK::GameAssembly + 0x55EFD0);
			return func();
		}

		static Material* _Material(Shader* shader) {
			static const auto func = (Material * (*)(Shader*))(CrabGameSDK::GameAssembly + 0x55F060);
			return func(shader);
		}

		static Material* _Material(const std::string& contents) {
			static const auto func = (Material * (*)(generic_string*))(CrabGameSDK::GameAssembly + 0x55EF50);
			return func(il2cpp::string_to_generic(contents));
		}

		Shader* get_shader() {
			static const auto func = (Shader * (*)(Material*))(CrabGameSDK::GameAssembly + 0x55F2E0);
			return func(this);
		}

		void set_shader(Shader* shader) {
			static const auto func = (void(*)(Material*, Shader*))(CrabGameSDK::GameAssembly + 0x55F590);
			return func(this, shader);
		}

		void set_color(const Color& color) {
			static const auto func = (void(*)(Material*, Color))(CrabGameSDK::GameAssembly + 0x55F320);
			return func(this, color);
		}

		Type get_mainTexture() {
			static const auto func = (Type(*)(Material*))(CrabGameSDK::GameAssembly + 0x55F200);
			return func(this);
		}

		void set_mainTexture(Type mainTexture) {
			static const auto func = (void(*)(Material*, Type))(CrabGameSDK::GameAssembly + 0x55F4A0);
			return func(this, mainTexture);
		}

		void set_renderQueue(const int& renderQueue) {
			static const auto func = (void(*)(Material*, int))(CrabGameSDK::GameAssembly + 0x55F550);
			return func(this, renderQueue);
		}

		int get_passCount() {
			static const auto func = (int(*)(Material*))(CrabGameSDK::GameAssembly + 0x55F2A0);
			return func(this);
		}

		void SetColor(const std::string& name, const Color& value) {
			static const auto func = (void(*)(Material*, generic_string*, Color))(CrabGameSDK::GameAssembly + 0x55E9F0);
			return func(this, il2cpp::string_to_generic(name), value);
		}

		void SetColor(const int& nameID, const Color& value) {
			static const auto func = (void(*)(Material*, int, Color))(CrabGameSDK::GameAssembly + 0x55EA50);
			return func(this, nameID, value);
		}

		void SetInt(const std::string& name, const int& value) {
			static const auto func = (void(*)(Material*, generic_string*, int))(CrabGameSDK::GameAssembly + 0x55EB50);
			return func(this, il2cpp::string_to_generic(name), value);
		}
	};

	struct MonoBehaviour : Behaviour {
		static MonoBehaviour* _MonoBehaviour() {
			static const auto func = (MonoBehaviour * (*)())(CrabGameSDK::GameAssembly + 0x54D410);
			return func();
		}

		bool IsInvoking() {
			static const auto func = (bool(*)(MonoBehaviour*))(CrabGameSDK::GameAssembly + 0x566AE0);
			return func(this);
		}

		void CancelInvoke() {
			static const auto func = (void(*)(MonoBehaviour*))(CrabGameSDK::GameAssembly + 0x566A60);
			return func(this);
		}

		void Invoke(const std::string& methodName, const float& time) {
			static const auto func = (void(*)(MonoBehaviour*, generic_string*, float))(CrabGameSDK::GameAssembly + 0x566C60);
			return func(this, il2cpp::string_to_generic(methodName), time);
		}

		void InvokeRepeating(const std::string& methodName, const float& time, const float& repeatRate) {
			static const auto func = (void(*)(MonoBehaviour*, generic_string*, float, float))(CrabGameSDK::GameAssembly + 0x566B90);
			return func(this, il2cpp::string_to_generic(methodName), time, repeatRate);
		}

		void CancelInvoke(const std::string& methodName) {
			static const auto func = (void(*)(MonoBehaviour*, generic_string*))(CrabGameSDK::GameAssembly + 0x566A10);
			return func(this, il2cpp::string_to_generic(methodName));
		}

		bool IsInvoking(const std::string& methodName) {
			static const auto func = (bool(*)(MonoBehaviour*, generic_string*))(CrabGameSDK::GameAssembly + 0x566CC0);
			return func(this, il2cpp::string_to_generic(methodName));
		}
	};

	struct Object {
		static Object* FindObjectFromInstanceID(const int& instanceID) {
			static const auto func = (Object * (*)(int))(CrabGameSDK::GameAssembly + 0x388F30);
			return func(instanceID);
		}

		template<typename T = uintptr_t>
		static T FindObjectOfType(const std::string& type, const bool includeInactive = false) {
			static const auto func = (T(*)(Type, bool))(CrabGameSDK::GameAssembly + 0x388F30);
			return func(il2cpp::get_type(type), includeInactive);
		}

		template<typename T = uintptr_t>
		static T FindObjectOfType(const std::string& type, const std::string& assembly, const bool includeInactive = false) {
			return FindObjectOfType<T>(il2cpp::translateType(type, assembly));
		}

		template<typename T = uintptr_t>
		static generic_array_t<T>* FindObjectsOfType(const std::string& type, const bool includeInactive = false) {
			static const auto func = (generic_array_t<T>*(*)(Type, bool))(CrabGameSDK::GameAssembly + 0x389010);
			return func(il2cpp::get_type(type), includeInactive);
		}

		int GetInstanceID() {
			static const auto func = (int(*)(Object*))(CrabGameSDK::GameAssembly + 0x389080);
			return func(this);
		}

		int GetHashCode() {
			static const auto func = (int(*)(Object*))(CrabGameSDK::GameAssembly + 0x389070);
			return func(this);
		}

		std::string get_name() {
			static const auto func = (generic_string * (*)(Object*))(CrabGameSDK::GameAssembly + 0x389D70);
			return il2cpp::generic_to_string(func(this));
		}

		void set_name(const std::string& name) {
			static const auto func = (void(*)(Object*, generic_string*))(CrabGameSDK::GameAssembly + 0x38A1D0);
			return func(this, il2cpp::string_to_generic(name));
		}

		void Destroy() {
			static const auto func = (void(*)(Object*))(CrabGameSDK::GameAssembly + 0x388B70);
			return func(this);
		}
	};

	struct Physics {
		Physics() = delete;

		enum class QueryTriggerInteraction
		{
			UseGlobal,
			Ignore,
			Collide
		};

		static bool Raycast(const Ray& ray) {
			static const auto func = (bool(*)(Ray))(CrabGameSDK::GameAssembly + 0x9897C0);
			return func(ray);
		}

		static bool Raycast(const Vector3& origin, const Vector3& direction) {
			static const auto func = (bool(*)(Vector3, Vector3))(CrabGameSDK::GameAssembly + 0x98A940);
			return func(origin, direction);
		}

		static bool Raycast(const Ray& ray, const float& maxDistance) {
			static const auto func = (bool(*)(Ray, float))(CrabGameSDK::GameAssembly + 0x98A7D0);
			return func(ray, maxDistance);
		}

		static bool Raycast(const Ray& ray, RaycastHit& hitInfo) {
			static const auto func = (bool(*)(Ray, RaycastHit*))(CrabGameSDK::GameAssembly + 0x98A060);
			return func(ray, &hitInfo);
		}

		static bool Raycast(const Vector3& origin, const Vector3& direction, const float& maxDistance) {
			static const auto func = (bool(*)(Vector3, Vector3, float))(CrabGameSDK::GameAssembly + 0x989A90);
			return func(origin, direction, maxDistance);
		}

		static bool Raycast(const Vector3& origin, const Vector3& direction, RaycastHit& hitInfo) {
			static const auto func = (bool(*)(Vector3, Vector3, RaycastHit*))(CrabGameSDK::GameAssembly + 0x98AA80);
			return func(origin, direction, &hitInfo);
		}

		static bool Raycast(const Ray& ray, const float& maxDistance, const int& layerMask) {
			static const auto func = (bool(*)(Ray, float, int))(CrabGameSDK::GameAssembly + 0x98ABE0);
			return func(ray, maxDistance, layerMask);
		}

		static bool Raycast(const Ray& ray, RaycastHit& hitInfo, const float& maxDistance) {
			static const auto func = (bool(*)(Ray, RaycastHit*, float))(CrabGameSDK::GameAssembly + 0x98A340);
			return func(ray, &hitInfo, maxDistance);
		}

		static bool Raycast(const Vector3& origin, const Vector3& direction, const float& maxDistance, const int& layerMask) {
			static const auto func = (bool(*)(Vector3, Vector3, float, int))(CrabGameSDK::GameAssembly + 0x989670);
			return func(origin, direction, maxDistance, layerMask);
		}

		static bool Raycast(const Vector3& origin, const Vector3& direction, RaycastHit& hitInfo, const float& maxDistance) {
			static const auto func = (bool(*)(Vector3, Vector3, RaycastHit*, float))(CrabGameSDK::GameAssembly + 0x989920);
			return func(origin, direction, &hitInfo, maxDistance);
		}

		static bool Raycast(const Ray& ray, RaycastHit& hitInfo, const float& maxDistance, const int& layerMask) {
			static const auto func = (bool(*)(Ray, RaycastHit*, float, int))(CrabGameSDK::GameAssembly + 0x989D50);
			return func(ray, &hitInfo, maxDistance, layerMask);
		}

		static bool Raycast(const Vector3& origin, const Vector3& direction, RaycastHit& hitInfo, const float& maxDistance, const int& layerMask) {
			static const auto func = (bool(*)(Vector3, Vector3, RaycastHit*, float, int))(CrabGameSDK::GameAssembly + 0x98A660);
			return func(origin, direction, &hitInfo, maxDistance, layerMask);
		}

		static bool Raycast(const Vector3& origin, const Vector3& direction, RaycastHit& hitInfo, const float& maxDistance, const int& layerMask, const QueryTriggerInteraction& queryTriggerInteraction) {
			static const auto func = (bool(*)(Vector3, Vector3, RaycastHit*, float, int, QueryTriggerInteraction))(CrabGameSDK::GameAssembly + 0x989BE0);
			return func(origin, direction, &hitInfo, maxDistance, layerMask, queryTriggerInteraction);
		}
	};

	struct Quaternion {
		float x;
		float y;
		float z;
		float w;

		Vector3 get_eulerAngles() {
			static const auto func = (Vector3(*)(Quaternion))(CrabGameSDK::GameAssembly + 0x391490);
			return func(*this);
		}

		static Quaternion FromRotation(const Vector3& fromDirection, const Vector3& toDirection) {
			static const auto func = (Quaternion(*)(Vector3, Vector3))(CrabGameSDK::GameAssembly + 0x390A20);
			return func(fromDirection, toDirection);
		}

		static Quaternion Inverse(const Quaternion& rotation) {
			static const auto func = (Quaternion(*)(Quaternion))(CrabGameSDK::GameAssembly + 0x390D50);
			return func(rotation);
		}

		static Quaternion Slerp(const Quaternion& a, const Quaternion& b, const float& t) {
			static const auto func = (Quaternion(*)(Quaternion, Quaternion, float))(CrabGameSDK::GameAssembly + 0x391060);
			return func(a, b, t);
		}

		static Quaternion Lerp(const Quaternion& a, const Quaternion& b, const float& t) {
			static const auto func = (Quaternion(*)(Quaternion, Quaternion, float))(CrabGameSDK::GameAssembly + 0x390E20);
			return func(a, b, t);
		}

		static Quaternion AngleAxis(const float& angle, const Vector3& axis) {
			static const auto func = (Quaternion(*)(float, Vector3))(CrabGameSDK::GameAssembly + 0x3905F0);
			return func(angle, axis);
		}

		static Quaternion LookRotation(const Vector3& forward) {
			static const auto func = (Quaternion(*)(Vector3))(CrabGameSDK::GameAssembly + 0x390EF0);
			return func(forward);
		}

		Quaternion() {}
		Quaternion(const float& x, const float& y, const float& z, const float& w) :
			x(x), y(y), z(z), w(w) {}

		Quaternion operator*(const Quaternion& rhs) {
			static const auto func = (Quaternion(*)(Quaternion, Quaternion))(CrabGameSDK::GameAssembly + 0x391690);
			return func(*this, rhs);
		}

		Quaternion operator*(const Vector3& point) {
			static const auto func = (Quaternion(*)(Quaternion, Vector3))(CrabGameSDK::GameAssembly + 0x391840);
			return func(*this, point);
		}

		bool operator==(const Quaternion& rhs) {
			static const auto func = (bool(*)(Quaternion, Quaternion))(CrabGameSDK::GameAssembly + 0x3915D0);
			return func(*this, rhs);
		}

		bool operator!=(const Quaternion& rhs) {
			static const auto func = (bool(*)(Quaternion, Quaternion))(CrabGameSDK::GameAssembly + 0x391630);
			return func(*this, rhs);
		}

		static float Dot(const Quaternion& a, const Quaternion& b) {
			static const auto func = (float(*)(Quaternion, Quaternion))(CrabGameSDK::GameAssembly + 0x3906E0);
			return func(a, b);
		}

		static float Angle(const Quaternion& a, const Quaternion& b) {
			static const auto func = (float(*)(Quaternion, Quaternion))(CrabGameSDK::GameAssembly + 0x390650);
			return func(a, b);
		}

		static Quaternion Euler(const Vector3& euler) {
			static const auto func = (Quaternion(*)(Vector3))(CrabGameSDK::GameAssembly + 0x390910);
			return func(euler);
		}
	};

	struct Ray {
		Vector3 m_Origin;
		Vector3 m_Direction;

		Ray() {}
		Ray(const Vector3& origin, const Vector3& direction) :
			m_Origin(origin), m_Direction(direction) {}

		Vector3 GetPoint(const float& distance) {
			static const auto func = (Vector3(*)(Ray, float))(CrabGameSDK::GameAssembly + 0x391E10);
			return func(*this, distance);
		}

		std::string ToString() {
			static const auto func = (generic_string * (*)(Ray))(CrabGameSDK::GameAssembly + 0x392030);
			return il2cpp::generic_to_string(func(*this));
		}
	};

	struct RaycastHit {
		Vector3 m_Point;
		Vector3 m_Normal;
		unsigned int m_FaceID;
		float m_Distance;
		Vector2 m_UV;
		int m_Collider;

		Collider* get_collider() {
			return (Collider*)Object::FindObjectFromInstanceID(m_Collider);
		}

		Rigidbody* get_rigidbody() {
			return get_collider()->get_attachedRigidbody();
		}

		Transform* get_transform() {
			if (get_rigidbody())
				return get_rigidbody()->get_transform();

			return get_collider()->get_transform();
		}
	};

	struct Renderer : Component {
		Renderer() = delete;
		static Renderer* _Renderer() {
			static const auto func = (Renderer * (*)())(CrabGameSDK::GameAssembly + 0x54D410);
			return func();
		}

		Material* GetMaterial() {
			static const auto func = (Material * (*)(Renderer*))(CrabGameSDK::GameAssembly + 0x3998F0);
			return func(this);
		}

		Material* GetSharedMaterial() {
			static const auto func = (Material * (*)(Renderer*))(CrabGameSDK::GameAssembly + 0x399970);
			return func(this);
		}

		void SetMaterial(Material* material) {
			static const auto func = (void(*)(Renderer*, Material*))(CrabGameSDK::GameAssembly + 0x399B20);
			return func(this, material);
		}

		bool get_enabled() {
			static const auto func = (bool(*)(Renderer*))(CrabGameSDK::GameAssembly + 0x399B70);
			return func(this);
		}

		void set_enabled(const bool& enabled) {
			static const auto func = (void(*)(Renderer*, bool))(CrabGameSDK::GameAssembly + 0x399C70);
			return func(this, enabled);
		}

		void set_recieveShadows(const bool& recieveShadows) {
			static const auto func = (void(*)(Renderer*, bool))(CrabGameSDK::GameAssembly + 0x399CC0);
			return func(this, recieveShadows);
		}

		int get_sortingLayerID() {
			static const auto func = (int(*)(Renderer*))(CrabGameSDK::GameAssembly + 0x399BF0);
			return func(this);
		}

		void set_sortingLayerID(const int& sortingLayer) {
			static const auto func = (void(*)(Renderer*, int))(CrabGameSDK::GameAssembly + 0x399D50);
			return func(this, sortingLayer);
		}

		int GetMaterialCount() {
			static const auto func = (int(*)(Renderer*))(CrabGameSDK::GameAssembly + 0x3998B0);
			return func(this);
		}

		void set_materials(generic_array_t<Material*>* materials) {
			static const auto func = (void(*)(Renderer*, generic_array_t<Material*>*))(CrabGameSDK::GameAssembly + 0x399AD0);
			return func(this, materials);
		}

		Material* get_material() {
			static const auto func = (Material * (*)(Renderer*))(CrabGameSDK::GameAssembly + 0x3998F0);
			return func(this);
		}

		void set_material(Material* material) {
			static const auto func = (void(*)(Renderer*, Material*))(CrabGameSDK::GameAssembly + 0x399B20);
			return func(this, material);
		}
	};

	struct Resolution {
		int m_Width;
		int m_Heigth;
		int m_RefreshRate;

		std::string ToString() {
			static const auto func = (generic_string * (*)(Resolution))(CrabGameSDK::GameAssembly + 0x399E20);
			return il2cpp::generic_to_string(func(*this));
		}
	};

	struct Rigidbody : Component {
		Rigidbody() = delete;
		static Rigidbody* _Rigidbody() {
			static const auto func = (Rigidbody * (*)())(CrabGameSDK::GameAssembly + 0x264FC0);
			return func();
		}

		Vector3 get_velocity() {
			static const auto func = (Vector3(*)(Rigidbody*))(CrabGameSDK::GameAssembly + 0x98C050);
			return func(this);
		}

		void set_velocity(const Vector3& velocity) {
			static const auto func = (void(*)(Rigidbody*, Vector3))(CrabGameSDK::GameAssembly + 0x98C540);
			return func(this, velocity);
		}

		Vector3 get_angularVelocity() {
			static const auto func = (Vector3(*)(Rigidbody*))(CrabGameSDK::GameAssembly + 0x98BDB0);
			return func(this);
		}

		void set_angularVelocity(const Vector3& angularVelocity) {
			static const auto func = (void(*)(Rigidbody*, Vector3))(CrabGameSDK::GameAssembly + 0x98C140);
			return func(this, angularVelocity);
		}

		float get_drag() {
			static const auto func = (float(*)(Rigidbody*))(CrabGameSDK::GameAssembly + 0x98BE00);
			return func(this);
		}

		void set_drag(const float& drag) {
			static const auto func = (void(*)(Rigidbody*, float))(CrabGameSDK::GameAssembly + 0x98C190);
			return func(this, drag);
		}

		void set_angularDrag(const float& angularDrag) {
			static const auto func = (void(*)(Rigidbody*, float))(CrabGameSDK::GameAssembly + 0x98C0A0);
			return func(this, angularDrag);
		}

		float get_mass() {
			static const auto func = (float(*)(Rigidbody*))(CrabGameSDK::GameAssembly + 0x98BE80);
			return func(this);
		}

		void set_mass(const float& mass) {
			static const auto func = (void(*)(Rigidbody*, float))(CrabGameSDK::GameAssembly + 0x98C270);
			return func(this, mass);
		}

		void set_useGravity(const bool& useGravity) {
			static const auto func = (void(*)(Rigidbody*, bool))(CrabGameSDK::GameAssembly + 0x98C4A0);
			return func(this, useGravity);
		}

		bool get_isKinematic() {
			static const auto func = (bool(*)(Rigidbody*))(CrabGameSDK::GameAssembly + 0x98BE40);
			return func(this);
		}

		void set_isKinematic(const bool& isKinematic) {
			static const auto func = (void(*)(Rigidbody*, bool))(CrabGameSDK::GameAssembly + 0x98C220);
			return func(this, isKinematic);
		}

		Vector3 get_position() {
			static const auto func = (Vector3(*)(Rigidbody*))(CrabGameSDK::GameAssembly + 0x98BF10);
			return func(this);
		}

		void set_position(const Vector3& position) {
			static const auto func = (void(*)(Rigidbody*, Vector3))(CrabGameSDK::GameAssembly + 0x98C360);
			return func(this, position);
		}

		Quaternion get_rotation() {
			static const auto func = (Quaternion(*)(Rigidbody*))(CrabGameSDK::GameAssembly + 0x98BFB0);
			return func(this);
		}
		void set_rotation(const Quaternion& rotation) {
			static const auto func = (void(*)(Rigidbody*, Quaternion))(CrabGameSDK::GameAssembly + 0x98C400);
			return func(this, rotation);
		}

		void MovePosition(const Vector3& position) {
			static const auto func = (void(*)(Rigidbody*, Vector3))(CrabGameSDK::GameAssembly + 0x98BC70);
			return func(this, position);
		}

		void MoveRotation(const Quaternion& rot) {
			static const auto func = (void(*)(Rigidbody*, Quaternion))(CrabGameSDK::GameAssembly + 0x98BD10);
			return func(this, rot);
		}

		void AddForce(const Vector3& force) {
			static const auto func = (void(*)(Rigidbody*, Vector3))(CrabGameSDK::GameAssembly + 0x98BAC0);
			return func(this, force);
		}
	};

	struct Screen {
		Screen() = delete;

		enum FullScreenMode : int {
			ExlusiveFullScreen,
			FullScreenWindow,
			MaximizedWindow,
			Windowed
		};

		static int get_width() {
			static const auto func = (int(*)())(CrabGameSDK::GameAssembly + 0x39BB20);
			return func();
		}

		static int get_height() {
			static const auto func = (int(*)())(CrabGameSDK::GameAssembly + 0x39BAC0);
			return func();
		}

		static float get_dpi() {
			static const auto func = (int(*)())(CrabGameSDK::GameAssembly + 0x39BA30);
			return func();
		}

		static Resolution get_currentResolution() {
			static const auto func = (Resolution(*)())(CrabGameSDK::GameAssembly + 0x39B9F0);
			return func();
		}

		static bool get_fullScreen() {
			static const auto func = (bool(*)())(CrabGameSDK::GameAssembly + 0x39BA90);
			return func();
		}

		static bool get_fullScreenMode() {
			static const auto func = (FullScreenMode(*)())(CrabGameSDK::GameAssembly + 0x39BA60);
			return func();
		}

		static void SetResolution(const int& width, const int& height, const FullScreenMode& fullscreenMode, const int& preferredRefreshRate) {
			static const auto func = (void(*)(int, int, FullScreenMode, int))(CrabGameSDK::GameAssembly + 0x39B8E0);
			return func(width, height, fullscreenMode, preferredRefreshRate);
		}

		static void SetResolution(const int& width, const int& height, const bool& fullscreen, const int& preferredRefreshRate) {
			static const auto func = (void(*)(int, int, bool, int))(CrabGameSDK::GameAssembly + 0x39B940);
			return func(width, height, fullscreen, preferredRefreshRate);
		}

		static generic_array_t<Resolution>* get_resolutions() {
			static const auto func = (generic_array_t<Resolution>*(*)())(CrabGameSDK::GameAssembly + 0x39BAF0);
			return func();
		}
	};

	struct Shader {
		Shader() = delete;
		static Shader* _Shader() {
			static const auto func = (Shader * (*)())(CrabGameSDK::GameAssembly + 0x39C870);
			return func();
		}

		static Shader* Find(const std::string& name) {
			static const auto func = (Shader * (*)(generic_string*))(CrabGameSDK::GameAssembly + 0x39C620);
			return func(il2cpp::string_to_generic(name));
		}
	};

	struct Transform : Component {
		Transform() = delete;
		static Transform* _Transform() {
			static const auto func = (Transform * (*)())(CrabGameSDK::GameAssembly + 0x264FC0);
			return func();
		}

		Vector3 get_position() {
			static const auto func = (Vector3(*)(Transform*))(CrabGameSDK::GameAssembly + 0x3A5850);
			return func(this);
		}

		void set_position(const Vector3& position) {
			static const auto func = (void(*)(Transform*, Vector3))(CrabGameSDK::GameAssembly + 0x3A5F80);
			return func(this, position);
		}

		Vector3 get_localPosition() {
			static const auto func = (Vector3(*)(Transform*))(CrabGameSDK::GameAssembly + 0x3A5520);
			return func(this);
		}

		void set_localPosition(const Vector3& localPosition) {
			static const auto func = (void(*)(Transform*, Vector3))(CrabGameSDK::GameAssembly + 0x3A5CD0);
			return func(this, localPosition);
		}

		Vector3 get_eulerAngles() {
			static const auto func = (Vector3(*)(Transform*))(CrabGameSDK::GameAssembly + 0x3A52F0);
			return func(this);
		}

		void set_localEulerAngles(const Vector3& eulerAngles) {
			static const auto func = (void(*)(Transform*, Vector3))(CrabGameSDK::GameAssembly + 0x3A5BA0);
			return func(this, eulerAngles);
		}

		Vector3 get_right() {
			static const auto func = (Vector3(*)(Transform*))(CrabGameSDK::GameAssembly + 0x3A58A0);
			return func(this);
		}

		Vector3 get_up() {
			static const auto func = (Vector3(*)(Transform*))(CrabGameSDK::GameAssembly + 0x3A59F0);
			return func(this);
		}

		Vector3 get_forward() {
			static const auto func = (Vector3(*)(Transform*))(CrabGameSDK::GameAssembly + 0x3A5420);
			return func(this);
		}

		Quaternion get_rotation() {
			static const auto func = (Quaternion(*)(Transform*))(CrabGameSDK::GameAssembly + 0x3A59A0);
			return func(this);
		}

		void set_rotation(const Quaternion& rotation) {
			static const auto func = (void(*)(Transform*, Quaternion))(CrabGameSDK::GameAssembly + 0x3A6020);
			return func(this, rotation);
		}

		Quaternion get_localRotation() {
			static const auto func = (Quaternion(*)(Transform*))(CrabGameSDK::GameAssembly + 0x3A55C0);
			return func(this);
		}

		void set_localRotation(const Quaternion& rotation) {
			static const auto func = (void(*)(Transform*, Quaternion))(CrabGameSDK::GameAssembly + 0x3A5D70);
			return func(this, rotation);
		}

		Vector3 get_localScale() {
			static const auto func = (Vector3(*)(Transform*))(CrabGameSDK::GameAssembly + 0x3A5660);
			return func(this);
		}

		void set_localScale(const Vector3& localScale) {
			static const auto func = (void(*)(Transform*, Vector3))(CrabGameSDK::GameAssembly + 0x3A5E10);
			return func(this, localScale);
		}

		Transform* get_parent() {
			static const auto func = (Transform * (*)(Transform*))(CrabGameSDK::GameAssembly + 0x3A4270);
			return func(this);
		}

		void set_parent(Transform* parent) {
			static const auto func = (void(*)(Transform*, Transform*))(CrabGameSDK::GameAssembly + 0x3A5E60);
			return func(this, parent);
		}

		Transform* GetParent() {
			static const auto func = (Transform * (*)(Transform*))(CrabGameSDK::GameAssembly + 0x3A4270);
			return func(this);
		}

		void SetParent(Transform* p) {
			static const auto func = (void(*)(Transform*, Transform*))(CrabGameSDK::GameAssembly + 0x3A4DD0);
			return func(this, p);
		}

		void SetParent(Transform* parent, bool worldPositionStays) {
			static const auto func = (void(*)(Transform*, Transform*, bool))(CrabGameSDK::GameAssembly + 0x3A4E20);
			return func(this, parent, worldPositionStays);
		}

		void Rotate(const Vector3& eulers) {
			static const auto func = (void(*)(Transform*, Vector3))(CrabGameSDK::GameAssembly + 0x3A4A80);
			return func(this, eulers);
		}

		void Rotate(const float& xAngle, const float& yAngle, const float& zAngle) {
			static const auto func = (void(*)(Transform*, float, float, float))(CrabGameSDK::GameAssembly + 0x3A4D60);
			return func(this, xAngle, yAngle, zAngle);
		}

		void RotateAround(const Vector3& point, const Vector3& axis, const float& angle) {
			static const auto func = (void(*)(Transform*, Vector3, Vector3, float))(CrabGameSDK::GameAssembly + 0x3A4880);
			return func(this, point, axis, angle);
		}

		void LookAt(Transform* target) {
			static const auto func = (void(*)(Transform*, Transform*))(CrabGameSDK::GameAssembly + 0x3A45C0);
			return func(this, target);
		}

		void LookAt(const Vector3& worldPosition) {
			static const auto func = (void(*)(Transform*, Vector3))(CrabGameSDK::GameAssembly + 0x3A4740);
			return func(this, worldPosition);
		}

		Vector3 TransformDirection(const Vector3& direction) {
			static const auto func = (Vector3(*)(Transform*, Vector3))(CrabGameSDK::GameAssembly + 0x3A4F20);
			return func(this, direction);
		}

		Vector3 InverseTransformDirection(const Vector3& direction) {
			static const auto func = (Vector3(*)(Transform*, Vector3))(CrabGameSDK::GameAssembly + 0x3A4450);
			return func(this, direction);
		}

		Vector3 TransformPoint(const Vector3& position) {
			static const auto func = (Vector3(*)(Transform*, Vector3))(CrabGameSDK::GameAssembly + 0x3A4FE0);
			return func(this, position);
		}

		Vector3 InverseTransformPoint(const Vector3& position) {
			static const auto func = (Vector3(*)(Transform*, Vector3))(CrabGameSDK::GameAssembly + 0x3A4510);
			return func(this, position);
		}

		Transform* GetRoot() {
			static const auto func = (Transform * (*)(Transform*))(CrabGameSDK::GameAssembly + 0x3A42B0);
			return func(this);
		}

		int get_childCount() {
			static const auto func = (int(*)(Transform*))(CrabGameSDK::GameAssembly + 0x3A52B0);
			return func(this);
		}

		Vector3 get_lossyScale() {
			static const auto func = (Vector3(*)(Transform*))(CrabGameSDK::GameAssembly + 0x3A57B0);
			return func(this);
		}

		bool IsChildOf(Transform* parent) {
			static const auto func = (bool(*)(Transform*, Transform*))(CrabGameSDK::GameAssembly + 0x3A4570);
			return func(this, parent);
		}

		Transform* GetChild(const int& index) {
			static const auto func = (Transform * (*)(Transform*, int))(CrabGameSDK::GameAssembly + 0x3A41D0);
			return func(this, index);
		}
	};
}