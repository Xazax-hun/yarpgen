/*
Copyright (c) 2015-2016, Intel Corporation

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include "array.h"

Array::Array (std::string _name, unsigned int _type_id, unsigned int _size) {
    this->name = _name;
    this->type = Type (_type_id);
    this->size = _size;
}

void Array::dbg_dump () {
    std::cout << "name " << this->name << std::endl;
    std::cout << "size " << this->size << std::endl;
    this->type.dbg_dump();
}

std::string Array::get_name () { return this->name; }

void Array::set_size (unsigned int _size) { this->size = _size; }

unsigned int Array::get_size () { return this->size; }

unsigned int Array::get_type_id () { return this->type.get_id(); }

std::string Array::get_type_name () { return this->type.get_name(); }

void Array::set_max_value (int64_t _max_val) { this->type.set_max_value(_max_val); }

int64_t Array::get_max_value () { return this->type.get_max_value(); }

void Array::set_min_value (int64_t _min_val) { this->type.set_min_value(_min_val); }

int64_t Array::get_min_value () { return this->type.get_min_value(); }

bool Array::get_is_fp () { return this->type.get_is_fp(); }

bool Array::get_is_signed () { return this->type.get_is_signed(); }