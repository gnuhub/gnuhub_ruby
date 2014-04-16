//
//  myext.c
//  gnuhub_ruby
//
//  Created by gnuhub on 14-3-21.
//  Copyright (c) 2014年 com.gnuhub. All rights reserved.
//

#include "ruby.h"
static VALUE myclass_mymethod(VALUE rb_self,
                              VALUE rb_param1){
    // Code executed when calling my_method on an object of class MyModule::MyClass
    printf("%s\n",RSTRING_PTR(rb_param1));
    return rb_self;
}
void Init_myext() {
    // Define a new module
    VALUE mymodule = rb_define_module("MyModule");
    // Define a new class (inheriting Object) in this module
    VALUE myclass = rb_define_class_under(mymodule, "MyClass", rb_cObject);
    // Define a method in this class, taking 3 arguments, and using the C method "myclass_method" as its body
    rb_define_method(myclass, "my_method", myclass_mymethod, 1);
}