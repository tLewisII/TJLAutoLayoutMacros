TJLAutoLayoutMacros
===================

A collection of macros for use with auto layout.
From this:
 ```
UIView *redView = [[UIView alloc]init];
    redView.translatesAutoresizingMaskIntoConstraints = NO;
    redView.backgroundColor = [UIColor redColor];
    [self.view addSubview:redView];
    
    [self.view addConstraints:@[
                                [NSLayoutConstraint
                                 constraintWithItem:redView
                                 attribute:NSLayoutAttributeCenterX
                                 relatedBy:NSLayoutRelationEqual
                                 toItem:self.view
                                 attribute:NSLayoutAttributeCenterX
                                 multiplier:1.0
                                 constant:0],
                                [NSLayoutConstraint
                                 constraintWithItem:redView
                                 attribute:NSLayoutAttributeCenterY
                                 relatedBy:NSLayoutRelationEqual
                                 toItem:self.view
                                 attribute:NSLayoutAttributeCenterY
                                 multiplier:1.0
                                 constant:0],
                                [NSLayoutConstraint
                                 constraintWithItem:redView
                                 attribute:NSLayoutAttributeWidth
                                 relatedBy:NSLayoutRelationEqual
                                 toItem:nil
                                 attribute:NSLayoutAttributeNotAnAttribute
                                 multiplier:1.0
                                 constant:300],
                                [NSLayoutConstraint
                                 constraintWithItem:redView
                                 attribute:NSLayoutAttributeHeight
                                 relatedBy:NSLayoutRelationEqual
                                 toItem:redView
                                 attribute:NSLayoutAttributeWidth
                                 multiplier:1.0
                                 constant:0],
                                ]];
 ```
to this:
```
    UIView *redView = [[UIView alloc]init];
    redView.translatesAutoresizingMaskIntoConstraints = NO;
    redView.backgroundColor = [UIColor redColor];
    [self.view addSubview:redView];
    
    [self.view addConstraints:@[
                                NSConstraintMakeCenter(redView, self.view),
                                NSConstraintMakeWidthAndHeightEqual(redView, 300)
                                ]];

 ```

Simply a way to make auto layout a bit less verbose. Some of the macros are made to only be used when adding constraints to an array as in the example, as there are two constraints needed to center an item in a view. So NSConstraintMakeCenter is only made to be passed into an array.

<h2>Installation</h2>
<hr>
the prefered method is [Cocoapods](http://www.cocoapods.org), just put `pod 'TJLAutoLayoutMacros', '1.0.1'` into your podfile. If you don't want to use cocoapods, just grab the files in the Source folder, drop them into your project and then `#import "TJLAutoLayoutMacros.h"` and start saving lines of code!

<h1>License</h1>
If you use TJLAutoLayoutMacros and you like it, feel free to let me know, <terry@ploverproductions.com>. If you have any issue or want to make improvements, submit a pull request.<br><br>

The MIT License (MIT)
Copyright (c) 2014 Terry Lewis II

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
<br><br>
The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
<br><br>
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
