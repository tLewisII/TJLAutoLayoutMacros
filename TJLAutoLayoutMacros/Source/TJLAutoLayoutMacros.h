//
//  TJLAutoLayoutMacros.h
//  TJLAutoLayoutMacros
//
//  Created by Terry Lewis II on 1/13/14.
//  Copyright (c) 2014 Terry Lewis. All rights reserved.
//

/// Creates a NSLayoutConstraint with a 1.0 multiplier and a constant of 0.
/// Use NSConstraintMakeWithConstant if you want to speficy a constant and multiplier.
#define NSConstraintMake(item, itemAttribute, related, otherItem, otherAttribute) \
NSConstraintMakeWithConstant(item, itemAttribute, related, otherItem, otherAttribute, 1.0, 0)

/// Use this macro if you want to add a constant or multiplier other than 0 or 1.0
#define NSConstraintMakeWithConstant(item, itemAttribute, related, otherItem, otherAttribute, mult, const) \
[NSLayoutConstraint constraintWithItem:item attribute:itemAttribute relatedBy:related toItem:otherItem attribute:otherAttribute multiplier:mult constant:const]

/// Makes the first item have a constraint equal to the second item.
#define NSConstraintMakeEqualTo(item, attribute, otherItem) \
NSConstraintMake(item, attribute, TJLEqual, otherItem, attribute)

/// Makes the first item have a constraint equal to the second item, with the given offset.
#define NSConstraintMakeEqualToWithOffset(item, attribute, otherItem, offset) \
NSConstraintMakeWithConstant(item, attribute, TJLEqual, otherItem, attribute, 1.0, offset)

/// Add a width constraint with a constant to the item.
#define NSConstraintMakeWidth(item, related, width) \
NSConstraintMakeWithConstant(item, TJLWidth, related, nil, TJLNot, 1.0, width)

/// Make the width and height of the item equal.
/// Only use this when adding constraints to an array, as
/// this generates two constraints, it is not assignable to a single variable.
#define NSConstraintMakeWidthAndHeightEqual(item, size) \
NSConstraintMakeWithConstant(item, TJLWidth, TJLEqual, nil, TJLNot, 1.0, size), \
NSConstraintMakeWithConstant(item, TJLHeight, TJLEqual, item, TJLWidth, 1.0, 0)

/// Add a height constraint with a constant to the item.
#define NSConstraintMakeHeight(item, related, height) \
NSConstraintMakeWithConstant(item, TJLHeight, related, nil, TJLNot, 1.0, height)

/// Center the item within otherItem.
/// Only use this when adding constraints to an array, as
/// this generates two constraints, it is not assignable to a single variable.
#define NSConstraintMakeCenter(item, otherItem) \
NSConstraintMakeWithConstant(item, TJLCenterX, TJLEqual, otherItem, TJLCenterX, 1.0, 0), \
NSConstraintMakeWithConstant(item, TJLCenterY, TJLEqual, otherItem, TJLCenterY, 1.0, 0)

/// Center the item within otherItem, with the given offset.
/// Only use this when adding constraints to an array, as
/// this generates two constraints, it is not assignable to a single variable.
#define NSConstraintMakeCenterWithOffset(item, otherItem, offset) \
NSConstraintMakeWithConstant(item, TJLCenterX, TJLEqual, otherItem, TJLCenterX, 1.0, offset), \
NSConstraintMakeWithConstant(item, TJLCenterY, TJLEqual, otherItem, TJLCenterY, 1.0, offset)

#define TJLLeading NSLayoutAttributeLeading
#define TJLTrailing NSLayoutAttributeTrailing
#define TJLTop NSLayoutAttributeTop
#define TJLBottom NSLayoutAttributeBottom
#define TJLCenterX NSLayoutAttributeCenterX
#define TJLCenterY NSLayoutAttributeCenterY
#define TJLLeft NSLayoutAttributeLeft
#define TJLRight NSLayoutAttributeRight
#define TJLBaseline NSLayoutAttributeBaseline
#define TJLWidth NSLayoutAttributeWidth
#define TJLHeight NSLayoutAttributeHeight
#define TJLNot NSLayoutAttributeNotAnAttribute
#define TJLEqual NSLayoutRelationEqual
#define TJLGreaterThanOrEqual NSLayoutRelationGreaterThanOrEqual
#define TJLLessThanOrEqual NSLayoutRelationLessThanOrEqual


