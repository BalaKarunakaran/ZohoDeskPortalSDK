// Generated by Apple Swift version 4.2 effective-3.4 (swiftlang-1000.11.37.1 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import CoreData;
@import Foundation;
@import ObjectiveC;
@import QuartzCore;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ZohoDeskPortalSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

typedef SWIFT_ENUM(NSInteger, APNSMode, closed) {
  APNSModeSandbox = 0,
  APNSModeProduction = 1,
};


SWIFT_CLASS("_TtC17ZohoDeskPortalSDK20AttachmentJsonObject")
@interface AttachmentJsonObject : NSObject
@property (nonatomic, copy) NSString * _Nonnull name;
@property (nonatomic, copy) NSString * _Nonnull createdTime;
@property (nonatomic, copy) NSString * _Nonnull size;
@property (nonatomic, copy) NSString * _Nonnull attachmentId;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

/// TimeStyle
/// \code
///  case curveLess
///  case roundedCurve
///  case boxUpperCurve
///  case boxLowerCurve
///
/// \endcode
typedef SWIFT_ENUM(NSInteger, BubbleStyle, closed) {
/// This type is used to display the chat bubble without curve
  BubbleStyleCurveLess = 0,
/// This type is used to display the chat bubble with rounded curve
  BubbleStyleRoundedCurve = 1,
/// This type is used to display the chat bubble with upper arrow
  BubbleStyleBoxUpperCurve = 2,
/// This type is used to display the chat bubble with lower arrow
  BubbleStyleBoxLowerCurve = 3,
};







@class VisitorChat;

/// ChatActivityHandler is a NSObject class which contains the event handler methods.
SWIFT_CLASS("_TtC17ZohoDeskPortalSDK19ChatActivityHandler")
@interface ChatActivityHandler : NSObject
/// This event handler allows you to invoke a method when the visitor enters/exits the chat window.
/// \param isinternal - Boolean determines whether visitor internal or close the chat window
///
- (void)handleWidgetActionWithIsOpen:(BOOL)isOpen;
/// This event handler allows you to invoke a method when the user attends the chat initiated by the visitor.
/// \param visitor - VisitorChat object containing the data <em>Visit Id,Attender Email,Question</em>
///
- (void)handleVisitorAttendedWithVisitor:(VisitorChat * _Nonnull)visitor;
/// This event handler allows you to invoke a method, when the chat initiated by the visitor is not answered by the user or missed.
/// \param visitor - VisitorChat object containing the data <em>Visit Id,Question</em>
///
- (void)handleVisitorMissedWithVisitor:(VisitorChat * _Nonnull)visitor;
/// This event handler allows you to invoke a method, when the agents are offline. This will be called once after the page is loaded.
- (void)handleAgentsOffline;
/// This event handler allows you to invoke a method, when the agents are online. This will be called once after the page is loaded.
- (void)handleAgentsOnline;
/// This event handler allows you to invoke a method, when a chat session is completed.
/// \param visitor - VisitorChat object containing the data <em>Visit Id,Attender Email,Question</em>
///
- (void)handleChatCompleteWithVisitor:(VisitorChat * _Nonnull)visitor;
/// This event handler allows you to invoke a method, on completion of a rating.
/// \param visitor - VisitorChat object containing the data <em>Visit Id,Attender Email,Question,Rating</em>
///
- (void)handleRatingWithVisitor:(VisitorChat * _Nonnull)visitor;
/// This event handler allows you to invoke a method, on completion of a feedback.
/// \param visitor - VisitorChat object containing the data <em>Visit Id,Attender Email,Question,Feedback</em>
///
- (void)handleFeedbackWithVisitor:(VisitorChat * _Nonnull)visitor;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

/// ChatComponent
/// \code
/// case agent
/// case rating
/// case feedback
/// case agentPhotoOnChatIcon
///
/// \endcode
typedef SWIFT_ENUM(NSInteger, ChatComponent, closed) {
/// This component used to show/hide agent profile photo in chat window
  ChatComponentAgent = 0,
/// This component used to show/hide rating window
  ChatComponentRating = 1,
/// This component used to show/hide feedback window
  ChatComponentFeedback = 2,
/// This component used to show/hide agent photo on chat icon
  ChatComponentAgentPhotoOnChatIcon = 3,
};




SWIFT_CLASS("_TtC17ZohoDeskPortalSDK20DepartmentJsonObject")
@interface DepartmentJsonObject : NSObject
@property (nonatomic, copy) NSString * _Nonnull photoURL;
@property (nonatomic, copy) NSString * _Nonnull departmentId;
@property (nonatomic, copy) NSString * _Nonnull name;
@property (nonatomic, copy) NSString * _Nonnull nameInCustomerPortal;
@property (nonatomic, copy) NSString * _Nonnull descriptionString;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end




SWIFT_CLASS("_TtC17ZohoDeskPortalSDK14LCAdminHandler")
@interface LCAdminHandler : NSObject
- (void)setChatHandler:(ChatActivityHandler * _Nonnull)handler;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, Language, closed) {
  LanguageEnglish = 0,
  LanguageFrench = 1,
  LanguageGerman = 2,
  LanguageSpanish = 3,
  LanguageDutch = 4,
  LanguageNorwegian = 5,
  LanguageTurkish = 6,
  LanguageRussian = 7,
  LanguagePortuguese = 8,
  LanguageItalian = 9,
  LanguageKorean = 10,
  LanguageJapanese = 11,
  LanguageDanish = 12,
  LanguagePolish = 13,
  LanguageArabic = 14,
  LanguageHungarian = 15,
  LanguageChinese = 16,
  LanguageHebrew = 17,
  LanguageIrish = 18,
  LanguageRomanian = 19,
  LanguageThai = 20,
  LanguageSwedish = 21,
  LanguageGreek = 22,
  LanguageCzech = 23,
  LanguageSlovak = 24,
  LanguageSlovenian = 25,
  LanguageCroatian = 26,
};


SWIFT_CLASS("_TtC17ZohoDeskPortalSDK12LanguageCode")
@interface LanguageCode : NSObject
+ (NSString * _Nonnull)name:(enum Language)language SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol UIViewControllerAnimatedTransitioning;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC17ZohoDeskPortalSDK22LiveChatViewController")
@interface LiveChatViewController : UIViewController <UIViewControllerTransitioningDelegate>
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForDismissedController:(UIViewController * _Nonnull)dismissed SWIFT_WARN_UNUSED_RESULT;
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForPresentedController:(UIViewController * _Nonnull)presented presentingController:(UIViewController * _Nonnull)presenting sourceController:(UIViewController * _Nonnull)source SWIFT_WARN_UNUSED_RESULT;
- (void)didMoveToParentViewController:(UIViewController * _Nullable)parent;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



@class UITextView;

@interface LiveChatViewController (SWIFT_EXTENSION(ZohoDeskPortalSDK)) <UITextViewDelegate>
- (BOOL)textView:(UITextView * _Nonnull)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString * _Nonnull)text SWIFT_WARN_UNUSED_RESULT;
- (void)textViewDidChange:(UITextView * _Nonnull)textView;
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
@end
























SWIFT_CLASS("_TtC17ZohoDeskPortalSDK23NotificationLinkHandler")
@interface NotificationLinkHandler : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC17ZohoDeskPortalSDK17ProductJsonObject")
@interface ProductJsonObject : NSObject
@property (nonatomic, copy) NSString * _Nonnull departmentId;
@property (nonatomic, copy) NSString * _Nonnull productName;
@property (nonatomic, copy) NSString * _Nonnull descriptionText;
@property (nonatomic, copy) NSString * _Nonnull productCode;
@property (nonatomic, copy) NSString * _Nonnull productId;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

/// ChatComponent
/// \code
/// case chatCompleted
/// case ratingCompleted
/// case feedbackCompleted
/// case ratingAndFeedbackCompleted
///
/// \endcode
typedef SWIFT_ENUM(NSInteger, SystemMessage, closed) {
/// This system type is used to set the message when chat is completed
  SystemMessageChatCompleted = 0,
/// This system type is used to set the message when rating is completed
  SystemMessageRatingCompleted = 1,
/// This system type is used to set the message when feedback is completed
  SystemMessageFeedbackCompleted = 2,
/// This system type is used to set the message when rating and feedback is completed
  SystemMessageRatingAndFeedbackCompleted = 3,
};


SWIFT_CLASS("_TtC17ZohoDeskPortalSDK22TicketDetailJsonObject")
@interface TicketDetailJsonObject : NSObject
@property (nonatomic, copy) NSString * _Nonnull responseDueDate;
@property (nonatomic, copy) NSString * _Nonnull phone;
@property (nonatomic, copy) NSString * _Nonnull subject;
@property (nonatomic, copy) NSString * _Nonnull modifiedByUserID;
@property (nonatomic, copy) NSString * _Nonnull modifiedByUserphotoURL;
@property (nonatomic, copy) NSString * _Nonnull modifiedByUsername;
@property (nonatomic, copy) NSString * _Nonnull ticketNumber;
@property (nonatomic, copy) NSString * _Nonnull resolution;
@property (nonatomic, copy) NSString * _Nonnull creatorPhotoURL;
@property (nonatomic, copy) NSString * _Nonnull creatorName;
@property (nonatomic, copy) NSString * _Nonnull ticketId;
@property (nonatomic, copy) NSString * _Nonnull closedTime;
@property (nonatomic, copy) NSString * _Nonnull descriptionData;
@property (nonatomic, copy) NSString * _Nonnull priority;
@property (nonatomic, copy) NSString * _Nonnull assigneeId;
@property (nonatomic, copy) NSString * _Nonnull dueDate;
@property (nonatomic, copy) NSString * _Nonnull status;
@property (nonatomic, copy) NSString * _Nonnull createdTime;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nullable customFields;
@property (nonatomic, copy) NSString * _Nonnull modifiedTime;
@property (nonatomic, copy) NSString * _Nonnull assigneephotoURL;
@property (nonatomic, copy) NSString * _Nonnull assigneeName;
@property (nonatomic, copy) NSString * _Nonnull commentCount;
@property (nonatomic, copy) NSString * _Nonnull productId;
@property (nonatomic, copy) NSString * _Nonnull category;
@property (nonatomic, copy) NSString * _Nonnull contactId;
@property (nonatomic, copy) NSString * _Nonnull email;
@property (nonatomic, copy) NSString * _Nonnull threadCount;
@property (nonatomic, copy) NSString * _Nonnull classification;
@property (nonatomic, copy) NSString * _Nonnull departmentId;
@property (nonatomic, copy) NSString * _Nonnull channel;
@property (nonatomic) BOOL hasBlueprint;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC17ZohoDeskPortalSDK22TicketFieldsJsonObject")
@interface TicketFieldsJsonObject : NSObject
@property (nonatomic, copy) NSString * _Nonnull displayLabel;
@property (nonatomic, copy) NSString * _Nonnull name;
@property (nonatomic, copy) NSString * _Nonnull ticketFieldId;
@property (nonatomic, copy) NSString * _Nonnull type;
@property (nonatomic) BOOL isMandatory;
@property (nonatomic, copy) NSString * _Nonnull maxLength;
@property (nonatomic, copy) NSString * _Nonnull allowedValues;
@property (nonatomic, copy) NSString * _Nonnull defaultValue;
@property (nonatomic) BOOL isCustomField;
@property (nonatomic) NSInteger order;
@property (nonatomic, copy) NSString * _Nonnull decimalPlaces;
@property (nonatomic) BOOL isReadOnly;
@property (nonatomic, copy) NSData * _Nullable dependencyMapping;
@property (nonatomic, copy) NSData * _Nullable statusMapping;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

/// TimeStyle
/// \code
/// case inside
/// case outsideSlide
///
/// \endcode
typedef SWIFT_ENUM(NSInteger, TimeStyle, closed) {
/// This type is used to display the message time inside the chat bubble
  TimeStyleInside = 0,
/// This type is used to display the message time on user sliding the chat message
  TimeStyleOutsideSlide = 1,
};


































@interface UINavigationController (SWIFT_EXTENSION(ZohoDeskPortalSDK))
@property (nonatomic, readonly, strong) UIViewController * _Nullable childViewControllerForStatusBarStyle;
@end










































@interface UIWindow (SWIFT_EXTENSION(ZohoDeskPortalSDK))
@property (nonatomic, readonly, strong) UIViewController * _Nullable visibleViewControllerFromWindow;
+ (UIViewController * _Nullable)getVisibleViewControllerfromParent:(UIViewController * _Nullable)vc SWIFT_WARN_UNUSED_RESULT;
@end




SWIFT_CLASS("_TtC17ZohoDeskPortalSDK11VisitorChat")
@interface VisitorChat : NSObject
@property (nonatomic, copy) NSString * _Nullable visitId;
@property (nonatomic, copy) NSString * _Nullable question;
@property (nonatomic, copy) NSString * _Nullable attenderEmail;
@property (nonatomic, copy) NSString * _Nullable feedback;
@property (nonatomic, copy) NSString * _Nullable rating;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC17ZohoDeskPortalSDK13VisitorObject")
@interface VisitorObject : NSObject
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, copy) NSString * _Nullable email;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC17ZohoDeskPortalSDK28ZDBaseContollerConfiguration")
@interface ZDBaseContollerConfiguration : NSObject
@property (nonatomic) BOOL showLeftMenu;
@property (nonatomic) BOOL enableControllerTransactionAnimation;
@property (nonatomic) BOOL enableFullScreenIniPad;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC17ZohoDeskPortalSDK24ZDCommunityConfiguration")
@interface ZDCommunityConfiguration : ZDBaseContollerConfiguration
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC17ZohoDeskPortalSDK14ZDCustomFields")
@interface ZDCustomFields : NSObject
@property (nonatomic, copy) NSString * _Nonnull fieldID;
@property (nonatomic, copy) NSString * _Nonnull value;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC17ZohoDeskPortalSDK12ZDCustomFont")
@interface ZDCustomFont : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, copy) NSString * _Nonnull fontFamilyName;
@property (nonatomic, copy) NSString * _Nonnull regularFontName;
@property (nonatomic, copy) NSString * _Nonnull lightFontName;
@property (nonatomic, copy) NSString * _Nonnull mediumFontName;
@property (nonatomic, copy) NSString * _Nonnull boldFontName;
@end

typedef SWIFT_ENUM(NSInteger, ZDDataCenter, closed) {
  ZDDataCenterUS = 0,
  ZDDataCenterCN = 1,
  ZDDataCenterEU = 2,
  ZDDataCenterIN = 3,
};


SWIFT_CLASS("_TtC17ZohoDeskPortalSDK25ZDHelpCenterConfiguration")
@interface ZDHelpCenterConfiguration : ZDBaseContollerConfiguration
@property (nonatomic) BOOL allowUserFeedback;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC17ZohoDeskPortalSDK23ZDLiveChatConfiguration")
@interface ZDLiveChatConfiguration : ZDBaseContollerConfiguration
@property (nonatomic, copy) NSString * _Nonnull vistiorName;
@property (nonatomic, strong) UIColor * _Null_unspecified messageWindowColor;
@property (nonatomic, strong) UIColor * _Null_unspecified incomingMessageBackgroundColor;
@property (nonatomic, strong) UIColor * _Null_unspecified outgoingMessageBackgroundColor;
@property (nonatomic) BOOL clearPreviousChatMessages;
@property (nonatomic) BOOL showAgentPhoto;
@property (nonatomic) BOOL showRating;
@property (nonatomic) BOOL showFeedback;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC17ZohoDeskPortalSDK17ZDNavigationTheme")
@interface ZDNavigationTheme : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) UIColor * _Nonnull navigationBarColor;)
+ (UIColor * _Nonnull)navigationBarColor SWIFT_WARN_UNUSED_RESULT;
+ (void)setNavigationBarColor:(UIColor * _Nonnull)newValue;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) UIColor * _Nonnull titleColor;)
+ (UIColor * _Nonnull)titleColor SWIFT_WARN_UNUSED_RESULT;
+ (void)setTitleColor:(UIColor * _Nonnull)newValue;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) UIColor * _Nonnull barButtonTextColor;)
+ (UIColor * _Nonnull)barButtonTextColor SWIFT_WARN_UNUSED_RESULT;
+ (void)setBarButtonTextColor:(UIColor * _Nonnull)newValue;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL translucent;)
+ (BOOL)translucent SWIFT_WARN_UNUSED_RESULT;
+ (void)setTranslucent:(BOOL)newValue;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) UIStatusBarStyle statusBarApperance;)
+ (UIStatusBarStyle)statusBarApperance SWIFT_WARN_UNUSED_RESULT;
+ (void)setStatusBarApperance:(UIStatusBarStyle)newValue;
@end


SWIFT_CLASS("_TtC17ZohoDeskPortalSDK21ZDPortalConfiguration")
@interface ZDPortalConfiguration : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
+ (void)setGuestUserWithEmail:(NSString * _Nonnull)email displayName:(NSString * _Nullable)displayName phoneNumber:(NSString * _Nullable)phoneNumber;
+ (void)disableZDKnowledgeBaseCategoriesWithCategoryIds:(NSArray<NSString *> * _Nonnull)CategoryIds;
+ (void)processConfigurationWithConfig:(ZDPortalConfiguration * _Nonnull)config;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL enableLogMessages;)
+ (BOOL)enableLogMessages SWIFT_WARN_UNUSED_RESULT;
+ (void)setEnableLogMessages:(BOOL)newValue;
@property (nonatomic) BOOL enableCommunity;
@property (nonatomic) BOOL enableHelpCenter;
@property (nonatomic) BOOL enableMyTicket;
@property (nonatomic) BOOL enableCreateTicket;
@property (nonatomic) BOOL showLeftMenu;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nonnull setSDKLanguage;)
+ (NSString * _Nonnull)setSDKLanguage SWIFT_WARN_UNUSED_RESULT;
+ (void)setSetSDKLanguage:(NSString * _Nonnull)newValue;
@end

@class ZDTicketForm;

/// This class provoide all apis
SWIFT_CLASS("_TtC17ZohoDeskPortalSDK11ZDProvoider")
@interface ZDProvoider : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZDProvoider * _Nonnull sharedInstance;)
+ (ZDProvoider * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
/// This method list all department for the specific department
/// \param onComplition Array of departments or error
///
- (void)getDepartmentsOnCompletion:(void (^ _Nonnull)(NSArray<DepartmentJsonObject *> * _Nullable))onCompletion onError:(void (^ _Nonnull)(NSError * _Nullable))onError;
/// This method list all Product for the specific department
/// \param onComplition Array of Product or error
///
- (void)getProductsFor:(NSString * _Nonnull)departmentId onCompletion:(void (^ _Nonnull)(NSArray<ProductJsonObject *> * _Nullable))onCompletion onError:(void (^ _Nonnull)(NSError * _Nullable))onError;
/// Get Ticket Form for the Create new Ticker
/// \param onCompletion Array of Ticket Fields or error
///
- (void)getTicketForm:(NSString * _Nonnull)departmentId onCompletion:(void (^ _Nonnull)(NSArray<TicketFieldsJsonObject *> * _Nullable))onCompletion onError:(void (^ _Nonnull)(NSError * _Nullable))onError;
/// Upload Ticket Attachement
/// \param onCompletion Responce from server
///
- (void)uploadTicketAttachment:(NSString * _Nonnull)filePath onCompletion:(void (^ _Nonnull)(AttachmentJsonObject * _Nullable))onCompletion onError:(void (^ _Nonnull)(NSError * _Nullable))onError;
/// This method will create ticket
/// \param form ticket form object its contain user inut values
///
/// \param onCompletion created ticket detail or error.
///
- (void)createTicketWithForm:(ZDTicketForm * _Nonnull)form onCompletion:(void (^ _Nonnull)(TicketDetailJsonObject * _Nullable))onCompletion onError:(void (^ _Nonnull)(NSError * _Nullable))onError;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC17ZohoDeskPortalSDK27ZDSolutionPageConfiguration")
@interface ZDSolutionPageConfiguration : ZDBaseContollerConfiguration
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

enum ZDThemeType : NSInteger;

SWIFT_CLASS("_TtC17ZohoDeskPortalSDK7ZDTheme")
@interface ZDTheme : NSObject
+ (void)applyThemeWithTheme:(enum ZDThemeType)theme;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC17ZohoDeskPortalSDK14ZDThemeArticle")
@interface ZDThemeArticle : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, strong) UIColor * _Nonnull tintColor;
@property (nonatomic, strong) UIColor * _Nonnull primaryTextColor;
@property (nonatomic, strong) UIColor * _Nonnull secondryTextColor;
@property (nonatomic, strong) UIColor * _Nonnull primaryBackgroundColor;
@property (nonatomic, strong) UIColor * _Nonnull secondryBackgroundColor;
@property (nonatomic, strong) UIColor * _Nonnull cellSeporatorColor;
@property (nonatomic, strong) UIColor * _Nonnull headerColor;
@end

typedef SWIFT_ENUM(NSInteger, ZDThemeType, closed) {
  ZDThemeTypeWhite = 0,
  ZDThemeTypeDark = 1,
};


SWIFT_CLASS("_TtC17ZohoDeskPortalSDK21ZDTicketConfiguration")
@interface ZDTicketConfiguration : ZDBaseContollerConfiguration
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC17ZohoDeskPortalSDK12ZDTicketForm")
@interface ZDTicketForm : NSObject
@property (nonatomic, copy) NSString * _Nonnull emailID;
@property (nonatomic, copy) NSString * _Nonnull departmentID;
@property (nonatomic, copy) NSString * _Nonnull productID;
@property (nonatomic, copy) NSString * _Nonnull subject;
@property (nonatomic, copy) NSString * _Nonnull descriptionText;
@property (nonatomic, copy) NSString * _Nonnull phone;
@property (nonatomic, copy) NSString * _Nonnull classification;
@property (nonatomic, copy) NSString * _Nonnull priority;
@property (nonatomic, copy) NSString * _Nonnull category;
@property (nonatomic, copy) NSString * _Nonnull subCategory;
@property (nonatomic, copy) NSString * _Nonnull contactName;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull uploads;
@property (nonatomic, copy) NSArray<ZDCustomFields *> * _Nullable customFields;
@property (nonatomic, copy) NSArray<NSString *> * _Nullable attachements;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP17ZohoDeskPortalSDK22ZohoDeskPortalDelegate_")
@protocol ZohoDeskPortalDelegate
- (void)didCloseChatWindow:(BOOL)showButton;
- (void)didShowChatWindow;
- (void)handleBadgeCountWithCount:(NSInteger)count;
@end


SWIFT_CLASS("_TtC17ZohoDeskPortalSDK17ZohoDeskPortalSDK")
@interface ZohoDeskPortalSDK : ChatActivityHandler
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) id <ZohoDeskPortalDelegate> _Nullable zohoDeskPortalDelegate;)
+ (id <ZohoDeskPortalDelegate> _Nullable)zohoDeskPortalDelegate SWIFT_WARN_UNUSED_RESULT;
+ (void)setZohoDeskPortalDelegate:(id <ZohoDeskPortalDelegate> _Nullable)value;
+ (void)initializeSDK:(NSString * _Nonnull)orgId appId:(NSString * _Nonnull)appId dataCenter:(enum ZDDataCenter)dataCenter configuration:(ZDPortalConfiguration * _Nonnull)configuration;
+ (void)initializeSDK:(NSString * _Nonnull)orgId appId:(NSString * _Nonnull)appId configuration:(ZDPortalConfiguration * _Nonnull)configuration;
- (void)handleWidgetActionWithIsOpen:(BOOL)isOpen;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface ZohoDeskPortalSDK (SWIFT_EXTENSION(ZohoDeskPortalSDK))
@end


SWIFT_CLASS("_TtCC17ZohoDeskPortalSDK17ZohoDeskPortalSDK24ZDAddtionalConfiguration")
@interface ZDAddtionalConfiguration : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nonnull LanguageCode;)
+ (NSString * _Nonnull)LanguageCode SWIFT_WARN_UNUSED_RESULT;
+ (void)setLanguageCode:(NSString * _Nonnull)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL enableComunity;)
+ (BOOL)enableComunity SWIFT_WARN_UNUSED_RESULT;
+ (void)setEnableComunity:(BOOL)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL enableHelpCenter;)
+ (BOOL)enableHelpCenter SWIFT_WARN_UNUSED_RESULT;
+ (void)setEnableHelpCenter:(BOOL)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL enableChat;)
+ (BOOL)enableChat SWIFT_WARN_UNUSED_RESULT;
+ (void)setEnableChat:(BOOL)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL enablePoweredByZoho;)
+ (BOOL)enablePoweredByZoho SWIFT_WARN_UNUSED_RESULT;
+ (void)setEnablePoweredByZoho:(BOOL)value;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface ZohoDeskPortalSDK (SWIFT_EXTENSION(ZohoDeskPortalSDK))
+ (void)enablePushNotificationWithDeviceToken:(NSString * _Nonnull)deviceToken isTestDevice:(BOOL)isTestDevice mode:(enum APNSMode)mode;
+ (void)processRemoteNotificationWithUserInfo:(NSDictionary * _Nonnull)userInfo;
@end




@interface ZohoDeskPortalSDK (SWIFT_EXTENSION(ZohoDeskPortalSDK))
- (void)setVisitorWithName:(NSString * _Nonnull)name image:(UIImage * _Nullable)image;
+ (void)showLiveChat;
+ (void)setMessageWindowWithColor:(UIColor * _Nonnull)color;
+ (void)setIncomingMessageBackgroundColorWithColor:(UIColor * _Nonnull)color;
+ (void)setOutgoingMessageBackgroundColorWithColor:(UIColor * _Nonnull)color;
@end


@interface ZohoDeskPortalSDK (SWIFT_EXTENSION(ZohoDeskPortalSDK))
+ (void)setWithJwtUserIdentifier:(NSString * _Nonnull)jwtUserIdentifier onComplition:(void (^ _Nonnull)(void))onComplition onError:(void (^ _Nonnull)(NSError * _Nullable))onError;
+ (void)clearAllLocalData;
+ (void)logout;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL isZDUserSignedIn;)
+ (BOOL)isZDUserSignedIn SWIFT_WARN_UNUSED_RESULT;
@end


@interface ZohoDeskPortalSDK (SWIFT_EXTENSION(ZohoDeskPortalSDK))
+ (void)showHomePageWithController:(UIViewController * _Nonnull)controller withConfiguration:(ZDPortalConfiguration * _Nonnull)withConfiguration;
+ (void)showHelpCenterWithController:(UIViewController * _Nonnull)controller;
+ (void)showArticleListForCategoryId:(NSString * _Nonnull)categoryId controller:(UIViewController * _Nonnull)controller with:(ZDHelpCenterConfiguration * _Nonnull)configuration;
+ (void)showLiveChatWithController:(UIViewController * _Nonnull)controller;
+ (void)showCommunityWithController:(UIViewController * _Nonnull)controller;
+ (void)ticketListWithController:(UIViewController * _Nonnull)controller;
+ (void)addTicketWithController:(UIViewController * _Nonnull)controller;
+ (void)showHelpPageForArticleId:(NSString * _Nonnull)articleId controller:(UIViewController * _Nonnull)controller with:(ZDSolutionPageConfiguration * _Nonnull)configuration;
+ (void)showHelpPageForArticleUrl:(NSURL * _Nonnull)articleLink controller:(UIViewController * _Nonnull)controller with:(ZDSolutionPageConfiguration * _Nonnull)configuration;
@end



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
