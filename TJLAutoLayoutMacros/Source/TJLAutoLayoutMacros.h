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
NSConstraintMake(item, attribute, kEqual, otherItem, attribute)

/// Makes the first item have a constraint equal to the second item, with the given offset.
#define NSConstraintMakeEqualToWithOffset(item, attribute, otherItem, offset) \
NSConstraintMakeWithConstant(item, attribute, kEqual, otherItem, attribute, 1.0, offset)

/// Add a width constraint with a constant to the item.
#define NSConstraintMakeWidth(item, related, width) \
NSConstraintMakeWithConstant(item, kWidth, related, nil, kNot, 1.0, width)

/// Add a height constraint with a constant to the item.
#define NSConstraintMakeHeight(item, related, height) \
NSConstraintMakeWithConstant(item, kHeight, related, nil, kNot, 1.0, height)

#define kLeading NSLayoutAttributeLeading
#define kTrailing NSLayoutAttributeTrailing
#define kTop NSLayoutAttributeTop
#define kBottom NSLayoutAttributeBottom
#define kCenterX NSLayoutAttributeCenterX
#define kCenterY NSLayoutAttributeCenterY
#define kLeft NSLayoutAttributeLeft
#define kRight NSLayoutAttributeRight
#define kBaseline NSLayoutAttributeBaseline
#define kWidth NSLayoutAttributeWidth
#define kHeight NSLayoutAttributeHeight
#define kNot NSLayoutAttributeNotAnAttribute
#define kEqual NSLayoutRelationEqual
#define kGreaterThanOrEqual NSLayoutRelationGreaterThanOrEqual
#define kLessThanOrEqual NSLayoutRelationLessThanOrEqual


