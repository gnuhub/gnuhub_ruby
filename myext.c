//
//  myext.c
//  gnuhub_ruby
//
//  Created by gnuhub on 14-3-21.
//  Copyright (c) 2014年 com.gnuhub. All rights reserved.
//

#include "ruby.h"

void Init_myext() {
    VALUE v1;
    printf("%d\n",sizeof(v1));
    printf("Hello Ruby from C!\n");
    VALUE str;
    str = rb_str_new(0,0);    /* creates a Ruby string (its struct is RString) */
    printf("%d\n",TYPE(str));
}