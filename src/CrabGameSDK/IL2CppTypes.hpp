#pragma once
#include <string>
#include <cinttypes>
#include "AppDataTypes.h"
#include <unordered_map>

template <typename T>
struct generic_array_t
{
	void* klass;
	void* monitor;
	void* bounds;
	size_t length;
	T items[1024];
};

template <typename T>
struct generic_list_t
{
	void* klass;
	void* monitor;
	generic_array_t<T>* items;
	int size;
	int version;
};

template <typename TKey, typename TValue>
struct generic_dictionary_entry
{
	void* monitor;
	TKey key;
	TValue value;
};

template <typename TKey, typename TValue>
struct generic_dictionary
{
	void* klass;
	void* monitor;
	void* buckets;
	generic_array_t<generic_dictionary_entry<TKey, TValue>>* entries;
	uint32_t count;
	uint32_t version;
	uint32_t freeList;
	uint32_t freeCount;
	void* comparer;
	void* keys;
	void* values;
	unsigned char _syncRoot;
};
using generic_array = generic_array_t<uintptr_t>;

struct generic_string
{
	uintptr_t instance;
	uintptr_t pad;
	int32_t length;
	wchar_t string[1024];
};

template <size_t T_size>
struct generic_item
{
	char content[T_size] = { 0 };
};

typedef struct Vector2;
typedef struct Vector3;
struct Vector2
{
	float x, y;

	Vector2() {}
	Vector2(const float& x, const float& y) : x(x), y(y) {}

	static float Distance(const Vector2& a, const Vector2& b) { return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y)); }
};

struct Vector3
{
	float x, y, z;
	static float Distance(const Vector3& a, const Vector3& b) { return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) + (a.z - b.z) * (a.z - b.z)); }

	operator Vector2() const { return Vector2(x, y); }
	Vector3 operator-(Vector3 b) const { return { x - b.x, y - b.y, z - b.z }; }
	Vector3 operator-=(Vector3 b) const { return { x - b.x, y - b.y, z - b.z }; }
	Vector3 operator+(Vector3 b) const { return { x + b.x, y + b.y, z + b.z }; }
	Vector3 operator+=(Vector3 b) const { return { x + b.x, y + b.y, z + b.z }; }
	Vector3 operator*(Vector3 b) const { return { x * b.x, y * b.y, z * b.z }; }
	Vector3 operator*=(Vector3 b) const { return { x * b.x, y * b.y, z * b.z }; }
	Vector3 operator*(float b) const { return { x * b, y * b, z * b }; }
	Vector3 operator*=(float b) const { return { x * b, y * b, z * b }; }
	Vector3 operator/(Vector3 b) const { return { x / b.x, y / b.x, z / b.x }; }
	Vector3 operator/=(Vector3 b) const { return { x / b.x, y / b.x, z / b.x }; }
	Vector3 operator/(float b) const { return { x / b, y / b, z / b }; }
	Vector3 operator/=(float b) const { return { x / b, y / b, z / b }; }
};

struct Vector4
{
	float x, y, z, w;
};

namespace il2cpp {
	std::string generic_to_string(const generic_string* input) {
		std::wstring str(input->string);
		return std::string(str.begin(), str.end());
	}

	generic_string* string_to_generic(const std::string& input) {
		static const auto marshal_to_string = (CrabGameSDK::GameAssembly + 0x6FBFD0);
		return reinterpret_cast<generic_string * (*)(const char*)>(marshal_to_string)(input.c_str());
	}

	void* get_type(const std::string& type) {
		static const auto GetType = (void* (*)(generic_string * type))(CrabGameSDK::GameAssembly + 0x649170);
		return GetType(string_to_generic(type));
	}
}