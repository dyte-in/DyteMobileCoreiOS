#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedProduceData, SharedDyteMeetingInfo, SharedDyteChat, SharedDyteSelfParticipant, SharedDyteMeta, SharedDyteRoomParticipants, SharedDytePoll, SharedDyteRecording, SharedDyteMobileClient, SharedUtils, SharedKotlinEnumCompanion, SharedKotlinEnum<E>, SharedAudioDeviceType, SharedKotlinArray<T>, SharedDyteAudioDevice, SharedDyteChatMessage, SharedDyteMessageType, SharedDyteMeetingInfoCompanion, SharedParticipantFlags, SharedDyteMeetingParticipant, SharedDytePollMessage, SharedDytePollOption, SharedDytePollVote, SharedDyteRecordingState, SharedPageViewMode, SharedDyteVideoDevice, SharedUserPresetModel, SharedVideoDeviceType, SharedMeetingRoomState, SharedCallState, SharedCallStateConnected, SharedCallStateDisconnected, SharedCallStateNone, SharedCallStateRetrying, SharedControllerOptions, SharedDyteEventType, SharedDyteEventTypeOnAudioDevicesChanged, SharedDyteEventTypeOnCameraClosed, SharedDyteEventTypeOnCameraDisconnected, SharedDyteEventTypeOnFirstFrameAvailable, SharedKotlinException, SharedDyteEventTypeOnMeetingRecordingStarted, SharedDyteEventTypeOnMeetingRecordingStopped, SharedDyteEventTypeOnMeetingRoomDisconnected, SharedDyteEventTypeOnMeetingRoomInitCompleted, SharedDyteEventTypeOnMeetingRoomInitStarted, SharedDyteEventTypeOnMeetingRoomJoinStarted, SharedDyteEventTypeOnMeetingRoomLeave, SharedDyteEventTypeOnMeetingRoomLeaveStarted, SharedDyteEventTypeOnNoActiveSpeaker, SharedDyteEventTypeOnPeerScreenShareUpdate, SharedDyteEventTypeOnPeerUnpinned, SharedPermission, SharedDyteEventTypeOnSelfAudioUpdate, SharedDyteEventTypeOnSelfVideoUpdate, SharedWebSocketChatMessagesModel, SharedWebSocketChatMessage, SharedWebSocketRoomStateModel, SharedWebSocketGetPageModel, SharedWebSocketConsumerClosedModel, SharedWebSocketConsumerResumedModel, SharedWebSocketPeerMuteModel, SharedWebSocketMeetingPeerUser, SharedWebSocketPeerLeftModel, SharedWebSocketPeerPinnedModel, SharedWebSocketProducerClosedModel, SharedWebSocketProducerConnectModel, SharedWebSocketSelectedPeersModel, SharedWebSocketWaitlistPeerAccepted, SharedWebSocketWaitlistPeerAdded, SharedWebSocketWaitlistPeerClosed, SharedWebSocketWaitlistPeerRejected, SharedPermissionType, SharedWebSocketPoll, SharedKotlinUnit, SharedOutboundMeetingEventType, SharedKotlinx_serialization_jsonJsonElement, SharedInboundMeetingEvent, SharedSocketOptions, SharedSocketEvent<T>, SharedSocket, SharedSocketEventCompanion, SharedSocketEventConnect, SharedSocketEventConnecting, SharedSocketEventDisconnect, SharedSocketEventError, SharedSocketEventMessage, SharedSocketEventPing, SharedSocketEventPong, SharedSocketEventReconnect, SharedSocketEventReconnectAttempt, SharedSocketOptionsTransport, SharedInboundMeetingEventType, SharedBasePayloadModel, SharedOutboundMeetingEvents, SharedResponseModelCompanion, SharedResponseModel, SharedConsumerAppDataCompanion, SharedConsumerAppData, SharedCodec, SharedHeaderExtension, SharedEncodings, SharedRtcp, SharedConsumerRtpParametersCompanion, SharedConsumerRtpParameters, SharedDeviceCompanion, SharedDevice, SharedRtx, SharedEncodingsCompanion, SharedMeetingPeerFlagsCompanion, SharedMeetingPeerFlags, SharedMeetingPeerMetadataCompanion, SharedMeetingPeerMetadata, SharedRtcpCompanion, SharedRtxCompanion, SharedWebSocketActiveSpeakerModelCompanion, SharedWebSocketActiveSpeakerModel, SharedWebSocketChatMessageCompanion, SharedWebSocketChatMessagesModelCompanion, SharedWebSocketConnectTransportModelCompanion, SharedWebSocketConnectTransportModel, SharedWebSocketConsumerClosedModelCompanion, SharedWebSocketConsumerModelCompanion, SharedWebSocketConsumerModel, SharedWebSocketConsumerResumedModelCompanion, SharedWebSocketEmptyModelCompanion, SharedWebSocketEmptyModel, SharedWebSocketGetPageModelCompanion, SharedWebSocketMeetingPeerUserCompanion, SharedWebSocketPeerLeftModelCompanion, SharedWebSocketPeerMuteModelCompanion, SharedWebSocketPeerPinnedModelCompanion, SharedWebSocketPollOption, SharedWebSocketPollCompanion, SharedWebSocketPollModelCompanion, SharedWebSocketPollModel, SharedWebSocketPollVote, SharedWebSocketPollOptionCompanion, SharedWebSocketPollVoteCompanion, SharedWebSocketPollsModelCompanion, SharedWebSocketPollsModel, SharedWebSocketProducerClosedModelCompanion, SharedWebSocketProducerConnectModelCompanion, SharedWebSocketSelectedPeersModelCompanion, SharedWebSocketWaitlistPeerAcceptedCompanion, SharedWebSocketWaitlistPeerAddedCompanion, SharedWebSocketWaitlistPeerClosedCompanion, SharedWebSocketWaitlistPeerRejectedCompanion, SharedCodecRtcpFeedback, SharedCodecParameters, SharedCodecCompanion, SharedCodecParametersCompanion, SharedCodecRtcpFeedbackCompanion, SharedCreateWebRTCTransportPayloadRequestModelCompanion, SharedCreateWebRTCTransportPayloadRequestModel, SharedFingerprint, SharedDtlsParametersCompanion, SharedDtlsParameters, SharedFingerprintCompanion, SharedHeaderExtensionCompanion, SharedIceCandidateCompanion, SharedIceCandidate, SharedIceParametersCompanion, SharedIceParameters, SharedRouterCapabilitiesModel, SharedJoinRoomPayloadRequestModelCompanion, SharedJoinRoomPayloadRequestModel, SharedRoomStateConfig, SharedRoomStateCompanion, SharedRoomState, SharedRoomStateAccessCompanion, SharedRoomStateAccess, SharedRoomStateConfigCompanion, SharedRouterCapabilitiesModelCompanion, SharedWebRtcCreateTransportModelCompanion, SharedWebRtcCreateTransportModel, SharedWebSocketJoinRoomModelCompanion, SharedWebSocketJoinRoomModel, SharedWebSocketRoomStateModelCompanion, RTCAudioTrack, RTCVideoTrack, RTCMediaStreamTrack, SharedRecordingResponseWrapper, SharedKtor_client_coreHttpClient, SharedIceServersWrapper, SharedMeetingSessionDataWrapper, SharedUserDataWrapper, SharedUserPresetDataWrapper, SharedRecordingData, SharedAuthCompanion, SharedAuth, SharedAuthResponseCompanion, SharedAuthResponse, SharedAuthorizationCompanion, SharedAuthorization, SharedChatPrivatePermissionsCompanion, SharedChatPrivatePermissions, SharedChatPublicPermissionsCompanion, SharedChatPublicPermissions, SharedCreateMeetingRequestCompanion, SharedCreateMeetingRequest, SharedMeetingResponse, SharedCreateMeetingResponseCompanion, SharedCreateMeetingResponse, SharedCreateMeetingResponseWrapperCompanion, SharedCreateMeetingResponseWrapper, SharedCreateParticipantRequestCompanion, SharedCreateParticipantRequest, SharedCreateParticipantResponseWrapperCompanion, SharedCreateParticipantResponseWrapper, SharedFeaturesOrganizationModelWrapper, SharedFeaturesDataCompanion, SharedFeaturesData, SharedFeaturesOrganizationModelCompanion, SharedFeaturesOrganizationModel, SharedFeaturesOrganizationModelWrapperCompanion, SharedGraphQlRequestVariables, SharedGraphQlRequestCompanion, SharedGraphQlRequest, SharedGraphQlRequestVariablesCompanion, SharedIceServerDataCompanion, SharedIceServerData, SharedIceServersWrapperCompanion, SharedMeetingResponseCompanion, SharedMeetingSessionDataCompanion, SharedMeetingSessionData, SharedMeetingSessionWrapper, SharedMeetingSessionDataWrapperCompanion, SharedMeetingSessionWrapperCompanion, SharedPresignedUrlDataCompanion, SharedPresignedUrlData, SharedPresignedUrlRequestCompanion, SharedPresignedUrlRequest, SharedPresignedUrlResponseCompanion, SharedPresignedUrlResponse, SharedRecordingDataCompanion, SharedRecordingDataWrapperCompanion, SharedRecordingDataWrapper, SharedRecordingResponseWrapperCompanion, SharedStopRecordingModelCompanion, SharedStopRecordingModel, SharedUserDataCompanion, SharedUserData, SharedUserDataWrapperCompanion, SharedUserPresetAloneHereThemeCompanion, SharedUserPresetAloneHereTheme, SharedUserPresetChatPermissionPropsCompanion, SharedUserPresetChatPermissionProps, SharedUserPresetColorsThemeCompanion, SharedUserPresetColorsTheme, SharedUserPresetControlBarThemeElements, SharedUserPresetControlBarThemeCompanion, SharedUserPresetControlBarTheme, SharedUserPresetControlBarThemeElementsCompanion, SharedUserPresetDataCompanion, SharedUserPresetData, SharedUserPresetDataWrapperCompanion, SharedUserPresetMultiTheme, SharedUserPresetSingleTheme, SharedUserPresetGridThemeCompanion, SharedUserPresetGridTheme, SharedUserPresetHeaderThemeElements, SharedUserPresetHeaderThemeCompanion, SharedUserPresetHeaderTheme, SharedUserPresetHeaderThemeElementsCompanion, SharedUserPresetPermissionsModel, SharedUserPresetThemeModel, SharedUserPresetModelCompanion, SharedUserPresetMultiThemeCompanion, SharedUserPresetPluginPermissions, SharedUserPresetPollsPermissions, SharedUserPresetProducePermissions, SharedUserPresetPermissionsModelCompanion, SharedUserPresetPluginConfigCompanion, SharedUserPresetPluginConfig, SharedUserPresetPluginPermissionsCompanion, SharedUserPresetPollsPermissionsCompanion, SharedUserPresetVideoPermissions, SharedUserPresetScreenSharePermissions, SharedUserPresetProducePermissionsCompanion, SharedUserPresetRequestModelCompanion, SharedUserPresetRequestModel, SharedUserPresetScreenSharePermissionsCompanion, SharedUserPresetSetupScreenThemeCompanion, SharedUserPresetSetupScreenTheme, SharedUserPresetSingleThemeCompanion, SharedUserPresetWaitingRoomTheme, SharedUserPresetThemeModelCompanion, SharedUserPresetVideoPermissionsCompanion, SharedUserPresetWaitingRoomThemeCompanion, SharedKotlinThrowable, SharedKotlinPair<__covariant A, __covariant B>, SharedKotlinByteIterator, SharedKotlinByteArray, NSData, SharedKotlinRuntimeException, SharedKotlinIllegalStateException, SharedKotlinx_serialization_jsonJsonElementCompanion, SharedKtor_client_coreHttpClientEngineConfig, SharedKtor_client_coreHttpClientConfig<T>, SharedKtor_eventsEvents, SharedKtor_client_coreHttpReceivePipeline, SharedKtor_client_coreHttpRequestPipeline, SharedKtor_client_coreHttpResponsePipeline, SharedKtor_client_coreHttpSendPipeline, SharedKotlinx_serialization_coreSerializersModule, SharedKotlinx_serialization_coreSerialKind, SharedKotlinNothing, SharedKtor_client_coreHttpRequestData, SharedKtor_client_coreHttpResponseData, SharedKotlinx_coroutines_coreCoroutineDispatcher, SharedKtor_client_coreProxyConfig, SharedKtor_utilsAttributeKey<T>, SharedKtor_eventsEventDefinition<T>, SharedKtor_utilsPipelinePhase, SharedKtor_utilsPipeline<TSubject, TContext>, SharedKtor_client_coreHttpReceivePipelinePhases, SharedKtor_client_coreHttpResponse, SharedKtor_client_coreHttpRequestPipelinePhases, SharedKtor_client_coreHttpRequestBuilder, SharedKtor_client_coreHttpResponsePipelinePhases, SharedKtor_client_coreHttpResponseContainer, SharedKtor_client_coreHttpClientCall, SharedKtor_client_coreHttpSendPipelinePhases, SharedKtor_httpUrl, SharedKtor_httpHttpMethod, SharedKtor_httpOutgoingContent, SharedKtor_httpHttpStatusCode, SharedKtor_utilsGMTDate, SharedKtor_httpHttpProtocolVersion, SharedKotlinAbstractCoroutineContextElement, SharedKotlinx_coroutines_coreCoroutineDispatcherKey, SharedKtor_httpHeadersBuilder, SharedKtor_client_coreHttpRequestBuilderCompanion, SharedKtor_httpURLBuilder, SharedKtor_utilsTypeInfo, SharedKtor_client_coreHttpClientCallCompanion, SharedKtor_httpUrlCompanion, SharedKtor_httpURLProtocol, SharedKtor_httpHttpMethodCompanion, SharedKtor_httpContentType, SharedKotlinCancellationException, SharedKtor_httpHttpStatusCodeCompanion, SharedKtor_utilsGMTDateCompanion, SharedKtor_utilsWeekDay, SharedKtor_utilsMonth, SharedKtor_httpHttpProtocolVersionCompanion, SharedKotlinAbstractCoroutineContextKey<B, E>, SharedKtor_ioMemory, SharedKtor_ioChunkBuffer, SharedKtor_ioBuffer, SharedKtor_ioByteReadPacket, SharedKtor_utilsStringValuesBuilderImpl, SharedKtor_httpURLBuilderCompanion, SharedKtor_httpURLProtocolCompanion, SharedKtor_httpHeaderValueParam, SharedKtor_httpHeaderValueWithParametersCompanion, SharedKtor_httpHeaderValueWithParameters, SharedKtor_httpContentTypeCompanion, SharedKtor_utilsWeekDayCompanion, SharedKtor_utilsMonthCompanion, SharedKtor_ioMemoryCompanion, SharedKtor_ioBufferCompanion, SharedKtor_ioChunkBufferCompanion, SharedKtor_ioInputCompanion, SharedKtor_ioInput, SharedKtor_ioByteReadPacketCompanion, SharedKotlinKTypeProjection, SharedKotlinx_coroutines_coreAtomicDesc, SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, SharedKotlinKVariance, SharedKotlinKTypeProjectionCompanion, SharedKotlinx_coroutines_coreAtomicOp<__contravariant T>, SharedKotlinx_coroutines_coreOpDescriptor, SharedKotlinx_coroutines_coreLockFreeLinkedListNode, SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, SharedKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol SharedIDytePlatformUtilsProvider, SharedDyteCameraEventsListener, SharedDyteMeetingRoomEventsListener, SharedDyteParticipantEventsListener, SharedDyteSelfEventsListener, SharedKotlinComparable, SharedIControllerContainer, SharedIApiClient, SharedIChatController, SharedIConnectionController, SharedIEventController, SharedIHostController, SharedIMetaController, SharedIParticipantController, SharedIPermissionController, SharedIPollController, SharedIPresetController, SharedIRecordingController, SharedIRoomNodeController, SharedISelfController, SharedISocketController, SharedISocketMessageResponseParser, SharedDytePermissionEventsListener, SharedSocketBuilder, SharedMapper, SharedKotlinx_serialization_coreKSerializer, SharedIDyteLoggerUtils, SharedIDyteMediaSoupUtils, SharedIDyteMediaSoupClientCallback, SharedIDytePlatformUtils, SharedIDyteMediaUtils, SharedIDytePeerConnectionUtils, SharedKotlinIterator, SharedKotlinx_serialization_coreEncoder, SharedKotlinx_serialization_coreSerialDescriptor, SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDecoder, SharedKotlinx_serialization_coreDeserializationStrategy, SharedKotlinCoroutineContext, SharedKotlinx_coroutines_coreCoroutineScope, SharedKtor_ioCloseable, SharedKtor_client_coreHttpClientEngine, SharedKtor_client_coreHttpClientEngineCapability, SharedKtor_utilsAttributes, SharedKotlinx_serialization_coreCompositeEncoder, SharedKotlinAnnotation, SharedKotlinx_serialization_coreCompositeDecoder, SharedKotlinCoroutineContextElement, SharedKotlinCoroutineContextKey, SharedKtor_client_coreHttpClientPlugin, SharedKotlinx_coroutines_coreDisposableHandle, SharedKotlinSuspendFunction2, SharedKotlinx_serialization_coreSerializersModuleCollector, SharedKotlinKClass, SharedKtor_httpHeaders, SharedKotlinx_coroutines_coreJob, SharedKotlinContinuation, SharedKotlinContinuationInterceptor, SharedKotlinx_coroutines_coreRunnable, SharedKotlinFunction, SharedKtor_httpHttpMessage, SharedKtor_ioByteReadChannel, SharedKtor_httpHttpMessageBuilder, SharedKtor_client_coreHttpRequest, SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier, SharedKtor_httpParameters, SharedKotlinMapEntry, SharedKtor_utilsStringValues, SharedKotlinx_coroutines_coreChildHandle, SharedKotlinx_coroutines_coreChildJob, SharedKotlinSequence, SharedKotlinx_coroutines_coreSelectClause0, SharedKtor_ioReadSession, SharedKotlinSuspendFunction1, SharedKotlinAppendable, SharedKtor_utilsStringValuesBuilder, SharedKtor_httpParametersBuilder, SharedKotlinKType, SharedKotlinx_coroutines_coreParentJob, SharedKotlinx_coroutines_coreSelectInstance, SharedKotlinSuspendFunction0, SharedKtor_ioObjectPool;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProduceData")))
@interface SharedProduceData : SharedBase
- (instancetype)initWithTransportId:(NSString * _Nullable)transportId kind:(NSString * _Nullable)kind rtpParameters:(NSString * _Nullable)rtpParameters appData:(NSString * _Nullable)appData __attribute__((swift_name("init(transportId:kind:rtpParameters:appData:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedProduceData *)doCopyTransportId:(NSString * _Nullable)transportId kind:(NSString * _Nullable)kind rtpParameters:(NSString * _Nullable)rtpParameters appData:(NSString * _Nullable)appData __attribute__((swift_name("doCopy(transportId:kind:rtpParameters:appData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable appData __attribute__((swift_name("appData")));
@property (readonly) NSString * _Nullable kind __attribute__((swift_name("kind")));
@property (readonly) NSString * _Nullable rtpParameters __attribute__((swift_name("rtpParameters")));
@property (readonly) NSString * _Nullable transportId __attribute__((swift_name("transportId")));
@end;

__attribute__((swift_name("IDyteMediaSoupClientCallback")))
@protocol SharedIDyteMediaSoupClientCallback
@required
- (NSString *)onProduceTransportId:(NSString *)transportId kind:(NSString *)kind rtpParameters:(NSString *)rtpParameters appData:(NSString * _Nullable)appData __attribute__((swift_name("onProduce(transportId:kind:rtpParameters:appData:)")));
- (void)onReceiveTransportConnectedTransportId:(NSString *)transportId dtlsParameters:(NSString *)dtlsParameters __attribute__((swift_name("onReceiveTransportConnected(transportId:dtlsParameters:)")));
- (void)onSendTransportConnectedTransportId:(NSString *)transportId dtlsParameters:(NSString *)dtlsParameters __attribute__((swift_name("onSendTransportConnected(transportId:dtlsParameters:)")));
@end;

__attribute__((swift_name("DyteMobileClient")))
@interface SharedDyteMobileClient : SharedBase
- (instancetype)initWithDytePlatformUtilsProvider:(id<SharedIDytePlatformUtilsProvider>)dytePlatformUtilsProvider __attribute__((swift_name("init(dytePlatformUtilsProvider:)"))) __attribute__((objc_designated_initializer));
- (void)addCameraEventsListenerCameraEventsListener:(id<SharedDyteCameraEventsListener>)cameraEventsListener __attribute__((swift_name("addCameraEventsListener(cameraEventsListener:)")));
- (void)addMeetingRoomEventsListenerMeetingRoomEventsListener:(id<SharedDyteMeetingRoomEventsListener>)meetingRoomEventsListener __attribute__((swift_name("addMeetingRoomEventsListener(meetingRoomEventsListener:)")));
- (void)addParticipantEventsListenerParticipantEventsListener:(id<SharedDyteParticipantEventsListener>)participantEventsListener __attribute__((swift_name("addParticipantEventsListener(participantEventsListener:)")));
- (void)addSelfEventsListenerSelfEventsListener:(id<SharedDyteSelfEventsListener>)selfEventsListener __attribute__((swift_name("addSelfEventsListener(selfEventsListener:)")));
- (void)doInitDyteMeetingInfo:(SharedDyteMeetingInfo *)dyteMeetingInfo __attribute__((swift_name("doInit(dyteMeetingInfo:)")));

/**
 @note This method converts instances of UnsupportedOperationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)joinRoomAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("joinRoom()")));

/**
 @note This method converts instances of UnsupportedOperationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)leaveRoomAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("leaveRoom()")));
- (void)removeCameraEventsListenerCameraEventsListener:(id<SharedDyteCameraEventsListener>)cameraEventsListener __attribute__((swift_name("removeCameraEventsListener(cameraEventsListener:)")));
- (void)removeMeetingRoomEventsListenerMeetingRoomEventsListener:(id<SharedDyteMeetingRoomEventsListener>)meetingRoomEventsListener __attribute__((swift_name("removeMeetingRoomEventsListener(meetingRoomEventsListener:)")));
- (void)removeParticipantEventsListenerParticipantEventsListener:(id<SharedDyteParticipantEventsListener>)participantEventsListener __attribute__((swift_name("removeParticipantEventsListener(participantEventsListener:)")));
- (void)removeSelfEventsListenerSelfEventsListener:(id<SharedDyteSelfEventsListener>)selfEventsListener __attribute__((swift_name("removeSelfEventsListener(selfEventsListener:)")));
@property (readonly) SharedDyteChat *chat __attribute__((swift_name("chat")));
@property (readonly) SharedDyteSelfParticipant *localUser __attribute__((swift_name("localUser")));
@property (readonly) SharedDyteMeta *meta __attribute__((swift_name("meta")));
@property (readonly) SharedDyteRoomParticipants *participants __attribute__((swift_name("participants")));
@property (readonly) SharedDytePoll *polls __attribute__((swift_name("polls")));
@property (readonly) SharedDyteRecording *recording __attribute__((swift_name("recording")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteiOSClientBuilder")))
@interface SharedDyteiOSClientBuilder : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedDyteMobileClient *)build __attribute__((swift_name("build()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Utils")))
@interface SharedUtils : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)utils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUtils *shared __attribute__((swift_name("shared")));
- (NSString *)getInitialsFromNameName:(NSString *)name __attribute__((swift_name("getInitialsFromName(name:)")));
- (void)printLog:(NSString *)receiver __attribute__((swift_name("printLog(_:)")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AudioDeviceType")))
@interface SharedAudioDeviceType : SharedKotlinEnum<SharedAudioDeviceType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedAudioDeviceType *wired __attribute__((swift_name("wired")));
@property (class, readonly) SharedAudioDeviceType *speaker __attribute__((swift_name("speaker")));
@property (class, readonly) SharedAudioDeviceType *bluetooth __attribute__((swift_name("bluetooth")));
@property (class, readonly) SharedAudioDeviceType *earPiece __attribute__((swift_name("earPiece")));
@property (class, readonly) SharedAudioDeviceType *unknown __attribute__((swift_name("unknown")));
+ (SharedKotlinArray<SharedAudioDeviceType *> *)values __attribute__((swift_name("values()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property (readonly) NSString *deviceType __attribute__((swift_name("deviceType")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteAudioDevice")))
@interface SharedDyteAudioDevice : SharedBase
- (instancetype)initWithId:(NSString *)id type:(SharedAudioDeviceType *)type __attribute__((swift_name("init(id:type:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedAudioDeviceType *)component2 __attribute__((swift_name("component2()")));
- (SharedDyteAudioDevice *)doCopyId:(NSString *)id type:(SharedAudioDeviceType *)type __attribute__((swift_name("doCopy(id:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) SharedAudioDeviceType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteChat")))
@interface SharedDyteChat : SharedBase
- (instancetype)initWithControllerContainer:(id<SharedIControllerContainer>)controllerContainer __attribute__((swift_name("init(controllerContainer:)"))) __attribute__((objc_designated_initializer));
- (void)sendFileMessageFilePath:(NSString *)filePath fileName:(NSString *)fileName __attribute__((swift_name("sendFileMessage(filePath:fileName:)")));
- (void)sendImageMessageFilePath:(NSString *)filePath fileName:(NSString *)fileName __attribute__((swift_name("sendImageMessage(filePath:fileName:)")));

/**
 @note This method converts instances of UnsupportedOperationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)sendTextMessageMessage:(NSString *)message error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("sendTextMessage(message:)")));
- (NSArray<NSDictionary<NSString *, id> *> *)toMap __attribute__((swift_name("toMap()")));
@property (readonly) NSMutableArray<SharedDyteChatMessage *> *messages __attribute__((swift_name("messages")));
@end;

__attribute__((swift_name("DyteChatMessage")))
@interface SharedDyteChatMessage : SharedBase
- (instancetype)initWithUserId:(NSString *)userId displayName:(NSString *)displayName read:(BOOL)read pluginId:(NSString * _Nullable)pluginId type:(SharedDyteMessageType *)type __attribute__((swift_name("init(userId:displayName:read:pluginId:type:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString * _Nullable pluginId __attribute__((swift_name("pluginId")));
@property (readonly) BOOL read __attribute__((swift_name("read")));
@property (readonly) SharedDyteMessageType *type __attribute__((swift_name("type")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteMeetingInfo")))
@interface SharedDyteMeetingInfo : SharedBase
- (instancetype)initWithOrgId:(NSString *)orgId roomName:(NSString *)roomName authToken:(NSString *)authToken enableAudio:(BOOL)enableAudio enableVideo:(BOOL)enableVideo baseUrl:(NSString *)baseUrl displayName:(NSString *)displayName __attribute__((swift_name("init(orgId:roomName:authToken:enableAudio:enableVideo:baseUrl:displayName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedDyteMeetingInfoCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (SharedDyteMeetingInfo *)doCopyOrgId:(NSString *)orgId roomName:(NSString *)roomName authToken:(NSString *)authToken enableAudio:(BOOL)enableAudio enableVideo:(BOOL)enableVideo baseUrl:(NSString *)baseUrl displayName:(NSString *)displayName __attribute__((swift_name("doCopy(orgId:roomName:authToken:enableAudio:enableVideo:baseUrl:displayName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *authToken __attribute__((swift_name("authToken")));
@property (readonly) NSString *baseUrl __attribute__((swift_name("baseUrl")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) BOOL enableAudio __attribute__((swift_name("enableAudio")));
@property (readonly) BOOL enableVideo __attribute__((swift_name("enableVideo")));
@property (readonly) NSString *orgId __attribute__((swift_name("orgId")));
@property (readonly) NSString *roomName __attribute__((swift_name("roomName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteMeetingInfo.Companion")))
@interface SharedDyteMeetingInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDyteMeetingInfoCompanion *shared __attribute__((swift_name("shared")));
- (SharedDyteMeetingInfo *)fromMapMap:(NSDictionary<NSString *, id> *)map __attribute__((swift_name("fromMap(map:)")));
@end;

__attribute__((swift_name("DyteMeetingParticipant")))
@interface SharedDyteMeetingParticipant : SharedBase
- (instancetype)initWithId:(NSString *)id userId:(NSString *)userId name:(NSString *)name picture:(NSString * _Nullable)picture isHost:(BOOL)isHost clientSpecificId:(NSString * _Nullable)clientSpecificId flags:(SharedParticipantFlags *)flags audioEnabled:(BOOL)audioEnabled videoEnabled:(BOOL)videoEnabled controllerContainer:(id<SharedIControllerContainer>)controllerContainer __attribute__((swift_name("init(id:userId:name:picture:isHost:clientSpecificId:flags:audioEnabled:videoEnabled:controllerContainer:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of UnsupportedOperationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)disableAudioAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("disableAudio()")));

/**
 @note This method converts instances of UnsupportedOperationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)disableVideoAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("disableVideo()")));

/**
 @note This method converts instances of UnsupportedOperationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)kickAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("kick()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property BOOL audioEnabled __attribute__((swift_name("audioEnabled")));
@property id _Nullable audioTrack __attribute__((swift_name("audioTrack")));
@property (readonly) NSString * _Nullable clientSpecificId __attribute__((swift_name("clientSpecificId")));
@property (readonly) SharedParticipantFlags *flags __attribute__((swift_name("flags")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isHost __attribute__((swift_name("isHost")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable picture __attribute__((swift_name("picture")));
@property id _Nullable screenShareTrack __attribute__((swift_name("screenShareTrack")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@property BOOL videoEnabled __attribute__((swift_name("videoEnabled")));
@property id _Nullable videoTrack __attribute__((swift_name("videoTrack")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteMessageType")))
@interface SharedDyteMessageType : SharedKotlinEnum<SharedDyteMessageType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedDyteMessageType *text __attribute__((swift_name("text")));
@property (class, readonly) SharedDyteMessageType *image __attribute__((swift_name("image")));
@property (class, readonly) SharedDyteMessageType *file __attribute__((swift_name("file")));
+ (SharedKotlinArray<SharedDyteMessageType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteMeta")))
@interface SharedDyteMeta : SharedBase
- (instancetype)initWithControllerContainer:(id<SharedIControllerContainer>)controllerContainer __attribute__((swift_name("init(controllerContainer:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property (readonly) NSString *meetingStartedTimestamp __attribute__((swift_name("meetingStartedTimestamp")));
@property (readonly) NSString *meetingTitle __attribute__((swift_name("meetingTitle")));
@property (readonly) NSString *roomName __attribute__((swift_name("roomName")));
@property (readonly) NSString *roomType __attribute__((swift_name("roomType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteParticipant")))
@interface SharedDyteParticipant : SharedDyteMeetingParticipant
- (instancetype)initWithId:(NSString *)id userId:(NSString *)userId name:(NSString *)name picture:(NSString * _Nullable)picture isHost:(BOOL)isHost clientSpecificId:(NSString *)clientSpecificId flags:(SharedParticipantFlags *)flags audioEnabled:(BOOL)audioEnabled videoEnabled:(BOOL)videoEnabled controllerContainer:(id<SharedIControllerContainer>)controllerContainer __attribute__((swift_name("init(id:userId:name:picture:isHost:clientSpecificId:flags:audioEnabled:videoEnabled:controllerContainer:)"))) __attribute__((objc_designated_initializer));
@property BOOL audioEnabled __attribute__((swift_name("audioEnabled")));
@property (readonly) NSString *clientSpecificId __attribute__((swift_name("clientSpecificId")));
@property (readonly) SharedParticipantFlags *flags __attribute__((swift_name("flags")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isHost __attribute__((swift_name("isHost")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable picture __attribute__((swift_name("picture")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@property BOOL videoEnabled __attribute__((swift_name("videoEnabled")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DytePoll")))
@interface SharedDytePoll : SharedBase
- (instancetype)initWithControllerContainer:(id<SharedIControllerContainer>)controllerContainer __attribute__((swift_name("init(controllerContainer:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of UnsupportedOperationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)createQuestion:(NSString *)question options:(NSArray<NSString *> *)options anonymous:(BOOL)anonymous hideVotes:(BOOL)hideVotes error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("create(question:options:anonymous:hideVotes:)")));
- (NSArray<NSDictionary<NSString *, id> *> *)toMap __attribute__((swift_name("toMap()")));

/**
 @note This method converts instances of UnsupportedOperationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)votePollMessage:(SharedDytePollMessage *)pollMessage pollOption:(SharedDytePollOption *)pollOption error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("vote(pollMessage:pollOption:)")));
@property (readonly) NSArray<SharedDytePollMessage *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DytePollMessage")))
@interface SharedDytePollMessage : SharedBase
- (instancetype)initWithId:(NSString *)id quesion:(NSString *)quesion anonymous:(BOOL)anonymous hideVotes:(BOOL)hideVotes createdBy:(NSString *)createdBy options:(NSArray<SharedDytePollOption *> *)options __attribute__((swift_name("init(id:quesion:anonymous:hideVotes:createdBy:options:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSArray<SharedDytePollOption *> *)component6 __attribute__((swift_name("component6()")));
- (SharedDytePollMessage *)doCopyId:(NSString *)id quesion:(NSString *)quesion anonymous:(BOOL)anonymous hideVotes:(BOOL)hideVotes createdBy:(NSString *)createdBy options:(NSArray<SharedDytePollOption *> *)options __attribute__((swift_name("doCopy(id:quesion:anonymous:hideVotes:createdBy:options:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL anonymous __attribute__((swift_name("anonymous")));
@property (readonly) NSString *createdBy __attribute__((swift_name("createdBy")));
@property (readonly) BOOL hideVotes __attribute__((swift_name("hideVotes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSArray<SharedDytePollOption *> *options __attribute__((swift_name("options")));
@property (readonly) NSString *quesion __attribute__((swift_name("quesion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DytePollOption")))
@interface SharedDytePollOption : SharedBase
- (instancetype)initWithText:(NSString *)text votes:(NSArray<SharedDytePollVote *> *)votes count:(id)count __attribute__((swift_name("init(text:votes:count:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedDytePollVote *> *)component2 __attribute__((swift_name("component2()")));
- (id)component3 __attribute__((swift_name("component3()")));
- (SharedDytePollOption *)doCopyText:(NSString *)text votes:(NSArray<SharedDytePollVote *> *)votes count:(id)count __attribute__((swift_name("doCopy(text:votes:count:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id count __attribute__((swift_name("count")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property (readonly) NSArray<SharedDytePollVote *> *votes __attribute__((swift_name("votes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DytePollVote")))
@interface SharedDytePollVote : SharedBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedDytePollVote *)doCopyId:(NSString *)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteRecording")))
@interface SharedDyteRecording : SharedBase
- (instancetype)initWithControllerContainer:(id<SharedIControllerContainer>)controllerContainer __attribute__((swift_name("init(controllerContainer:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of UnsupportedOperationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)startAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("start()")));
- (void)stop __attribute__((swift_name("stop()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property (readonly) SharedDyteRecordingState *recordingState __attribute__((swift_name("recordingState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteRoomParticipants")))
@interface SharedDyteRoomParticipants : SharedBase
- (instancetype)initWithWaitlisted:(NSArray<SharedDyteMeetingParticipant *> *)waitlisted joined:(NSArray<SharedDyteMeetingParticipant *> *)joined active:(NSArray<SharedDyteMeetingParticipant *> *)active screenshares:(NSArray<SharedDyteMeetingParticipant *> *)screenshares controllerContainer:(id<SharedIControllerContainer>)controllerContainer __attribute__((swift_name("init(waitlisted:joined:active:screenshares:controllerContainer:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedDyteMeetingParticipant *> *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedDyteMeetingParticipant *> *)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedDyteMeetingParticipant *> *)component3 __attribute__((swift_name("component3()")));
- (NSArray<SharedDyteMeetingParticipant *> *)component4 __attribute__((swift_name("component4()")));
- (SharedDyteRoomParticipants *)doCopyWaitlisted:(NSArray<SharedDyteMeetingParticipant *> *)waitlisted joined:(NSArray<SharedDyteMeetingParticipant *> *)joined active:(NSArray<SharedDyteMeetingParticipant *> *)active screenshares:(NSArray<SharedDyteMeetingParticipant *> *)screenshares controllerContainer:(id<SharedIControllerContainer>)controllerContainer __attribute__((swift_name("doCopy(waitlisted:joined:active:screenshares:controllerContainer:)")));

/**
 @note This method converts instances of UnsupportedOperationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)disableAllAudioAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("disableAllAudio()")));

/**
 @note This method converts instances of UnsupportedOperationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)disableAllVideoAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("disableAllVideo()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 @note This method converts instances of UnsupportedOperationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)kickAllAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("kickAll()")));
- (void)setModeViewMode:(SharedPageViewMode *)viewMode __attribute__((swift_name("setMode(viewMode:)")));
- (void)setPagePageNumber:(int32_t)pageNumber __attribute__((swift_name("setPage(pageNumber:)")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedDyteMeetingParticipant *> *active __attribute__((swift_name("active")));
@property (readonly) NSArray<SharedDyteMeetingParticipant *> *joined __attribute__((swift_name("joined")));
@property (readonly) NSArray<SharedDyteMeetingParticipant *> *screenshares __attribute__((swift_name("screenshares")));
@property (readonly) NSArray<SharedDyteMeetingParticipant *> *waitlisted __attribute__((swift_name("waitlisted")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteSelfParticipant")))
@interface SharedDyteSelfParticipant : SharedDyteMeetingParticipant
- (instancetype)initWithId:(NSString *)id userId:(NSString *)userId name:(NSString *)name picture:(NSString * _Nullable)picture isHost:(BOOL)isHost clientSpecificId:(NSString * _Nullable)clientSpecificId flags:(SharedParticipantFlags *)flags audioEnabled:(BOOL)audioEnabled videoEnabled:(BOOL)videoEnabled controllerContainer:(id<SharedIControllerContainer>)controllerContainer __attribute__((swift_name("init(id:userId:name:picture:isHost:clientSpecificId:flags:audioEnabled:videoEnabled:controllerContainer:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of UnsupportedOperationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)disableAudioAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("disableAudio()")));

/**
 @note This method converts instances of UnsupportedOperationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)disableVideoAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("disableVideo()")));

/**
 @note This method converts instances of UnsupportedOperationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)enableAudioAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("enableAudio()")));

/**
 @note This method converts instances of UnsupportedOperationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)enableVideoAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("enableVideo()")));
- (NSArray<SharedDyteAudioDevice *> *)getAudioDevices __attribute__((swift_name("getAudioDevices()")));
- (id)getEglContext __attribute__((swift_name("getEglContext()")));
- (SharedDyteAudioDevice *)getSelectedDevice __attribute__((swift_name("getSelectedDevice()")));
- (SharedDyteVideoDevice *)getSelectedVideoDevice __attribute__((swift_name("getSelectedVideoDevice()")));

/**
 @note This method converts instances of UnsupportedOperationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id _Nullable)getSelfPreviewTrackAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("getSelfPreviewTrack()"))) __attribute__((swift_error(nonnull_error)));
- (NSArray<SharedDyteVideoDevice *> *)getVideoDevices __attribute__((swift_name("getVideoDevices()")));
- (void)setDeviceDyteAndroidDevice:(SharedDyteAudioDevice *)dyteAndroidDevice __attribute__((swift_name("setDevice(dyteAndroidDevice:)")));
- (void)setDisplayNameName:(NSString *)name __attribute__((swift_name("setDisplayName(name:)")));
- (void)setVideoDeviceDyteVideoDevice:(SharedDyteVideoDevice *)dyteVideoDevice __attribute__((swift_name("setVideoDevice(dyteVideoDevice:)")));
- (void)switchCameraDyteVideoDevice:(SharedDyteVideoDevice *)dyteVideoDevice __attribute__((swift_name("switchCamera(dyteVideoDevice:)")));
@property BOOL audioEnabled __attribute__((swift_name("audioEnabled")));
@property (readonly) NSString * _Nullable clientSpecificId __attribute__((swift_name("clientSpecificId")));
@property (readonly) SharedParticipantFlags *flags __attribute__((swift_name("flags")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isHost __attribute__((swift_name("isHost")));
@property NSString *name __attribute__((swift_name("name")));
@property (readonly) SharedUserPresetModel *permission __attribute__((swift_name("permission")));
@property (readonly) NSString * _Nullable picture __attribute__((swift_name("picture")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@property BOOL videoEnabled __attribute__((swift_name("videoEnabled")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteTextMessage")))
@interface SharedDyteTextMessage : SharedDyteChatMessage
- (instancetype)initWithUserId:(NSString *)userId displayName:(NSString *)displayName read:(BOOL)read pluginId:(NSString * _Nullable)pluginId message:(NSString *)message __attribute__((swift_name("init(userId:displayName:read:pluginId:message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithUserId:(NSString *)userId displayName:(NSString *)displayName read:(BOOL)read pluginId:(NSString * _Nullable)pluginId type:(SharedDyteMessageType *)type __attribute__((swift_name("init(userId:displayName:read:pluginId:type:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteVideoDevice")))
@interface SharedDyteVideoDevice : SharedBase
- (instancetype)initWithId:(NSString *)id type:(SharedVideoDeviceType *)type __attribute__((swift_name("init(id:type:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedVideoDeviceType *)component2 __attribute__((swift_name("component2()")));
- (SharedDyteVideoDevice *)doCopyId:(NSString *)id type:(SharedVideoDeviceType *)type __attribute__((swift_name("doCopy(id:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) SharedVideoDeviceType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FileMessage")))
@interface SharedFileMessage : SharedDyteChatMessage
- (instancetype)initWithUserId:(NSString *)userId displayName:(NSString *)displayName read:(BOOL)read pluginId:(NSString * _Nullable)pluginId name:(NSString *)name fileUri:(NSString * _Nullable)fileUri __attribute__((swift_name("init(userId:displayName:read:pluginId:name:fileUri:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithUserId:(NSString *)userId displayName:(NSString *)displayName read:(BOOL)read pluginId:(NSString * _Nullable)pluginId type:(SharedDyteMessageType *)type __attribute__((swift_name("init(userId:displayName:read:pluginId:type:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString * _Nullable fileUri __attribute__((swift_name("fileUri")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageMessage")))
@interface SharedImageMessage : SharedDyteChatMessage
- (instancetype)initWithUserId:(NSString *)userId displayName:(NSString *)displayName read:(BOOL)read pluginId:(NSString * _Nullable)pluginId link:(NSString *)link fileUri:(NSString * _Nullable)fileUri fileName:(NSString * _Nullable)fileName __attribute__((swift_name("init(userId:displayName:read:pluginId:link:fileUri:fileName:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithUserId:(NSString *)userId displayName:(NSString *)displayName read:(BOOL)read pluginId:(NSString * _Nullable)pluginId type:(SharedDyteMessageType *)type __attribute__((swift_name("init(userId:displayName:read:pluginId:type:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString * _Nullable fileName __attribute__((swift_name("fileName")));
@property (readonly) NSString * _Nullable fileUri __attribute__((swift_name("fileUri")));
@property (readonly) NSString *link __attribute__((swift_name("link")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingRoomState")))
@interface SharedMeetingRoomState : SharedKotlinEnum<SharedMeetingRoomState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedMeetingRoomState *none __attribute__((swift_name("none")));
@property (class, readonly) SharedMeetingRoomState *joining __attribute__((swift_name("joining")));
@property (class, readonly) SharedMeetingRoomState *joined __attribute__((swift_name("joined")));
@property (class, readonly) SharedMeetingRoomState *leaving __attribute__((swift_name("leaving")));
@property (class, readonly) SharedMeetingRoomState *left __attribute__((swift_name("left")));
@property (class, readonly) SharedMeetingRoomState *error __attribute__((swift_name("error")));
+ (SharedKotlinArray<SharedMeetingRoomState *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipantFlags")))
@interface SharedParticipantFlags : SharedBase
- (instancetype)initWithRecorder:(BOOL)recorder hiddenParticipant:(BOOL)hiddenParticipant __attribute__((swift_name("init(recorder:hiddenParticipant:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (SharedParticipantFlags *)doCopyRecorder:(BOOL)recorder hiddenParticipant:(BOOL)hiddenParticipant __attribute__((swift_name("doCopy(recorder:hiddenParticipant:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL hiddenParticipant __attribute__((swift_name("hiddenParticipant")));
@property (readonly) BOOL recorder __attribute__((swift_name("recorder")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoDeviceType")))
@interface SharedVideoDeviceType : SharedKotlinEnum<SharedVideoDeviceType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedVideoDeviceType *front __attribute__((swift_name("front")));
@property (class, readonly) SharedVideoDeviceType *rear __attribute__((swift_name("rear")));
@property (class, readonly) SharedVideoDeviceType *external __attribute__((swift_name("external")));
+ (SharedKotlinArray<SharedVideoDeviceType *> *)values __attribute__((swift_name("values()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@end;

__attribute__((swift_name("CallState")))
@interface SharedCallState : SharedBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallState.Connected")))
@interface SharedCallStateConnected : SharedCallState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)connected __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCallStateConnected *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallState.Disconnected")))
@interface SharedCallStateDisconnected : SharedCallState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)disconnected __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCallStateDisconnected *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallState.None")))
@interface SharedCallStateNone : SharedCallState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)none __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCallStateNone *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallState.Retrying")))
@interface SharedCallStateRetrying : SharedCallState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)retrying __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCallStateRetrying *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllerOptions")))
@interface SharedControllerOptions : SharedBase
- (instancetype)initWithDyteMeetingInfo:(SharedDyteMeetingInfo *)dyteMeetingInfo platformUtilsProvider:(id<SharedIDytePlatformUtilsProvider>)platformUtilsProvider __attribute__((swift_name("init(dyteMeetingInfo:platformUtilsProvider:)"))) __attribute__((objc_designated_initializer));
- (SharedDyteMeetingInfo *)component1 __attribute__((swift_name("component1()")));
- (id<SharedIDytePlatformUtilsProvider>)component2 __attribute__((swift_name("component2()")));
- (SharedControllerOptions *)doCopyDyteMeetingInfo:(SharedDyteMeetingInfo *)dyteMeetingInfo platformUtilsProvider:(id<SharedIDytePlatformUtilsProvider>)platformUtilsProvider __attribute__((swift_name("doCopy(dyteMeetingInfo:platformUtilsProvider:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDyteMeetingInfo *dyteMeetingInfo __attribute__((swift_name("dyteMeetingInfo")));
@property (readonly) id<SharedIDytePlatformUtilsProvider> platformUtilsProvider __attribute__((swift_name("platformUtilsProvider")));
@end;

__attribute__((swift_name("DyteEventType")))
@interface SharedDyteEventType : SharedBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnActiveSpeakerChanged")))
@interface SharedDyteEventTypeOnActiveSpeakerChanged : SharedDyteEventType
- (instancetype)initWithParticipant:(SharedDyteMeetingParticipant *)participant __attribute__((swift_name("init(participant:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedDyteMeetingParticipant *participant __attribute__((swift_name("participant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnAudioDevicesChanged")))
@interface SharedDyteEventTypeOnAudioDevicesChanged : SharedDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onAudioDevicesChanged __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDyteEventTypeOnAudioDevicesChanged *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnCameraClosed")))
@interface SharedDyteEventTypeOnCameraClosed : SharedDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onCameraClosed __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDyteEventTypeOnCameraClosed *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnCameraDisconnected")))
@interface SharedDyteEventTypeOnCameraDisconnected : SharedDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onCameraDisconnected __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDyteEventTypeOnCameraDisconnected *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnCameraError")))
@interface SharedDyteEventTypeOnCameraError : SharedDyteEventType
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnCameraFreezed")))
@interface SharedDyteEventTypeOnCameraFreezed : SharedDyteEventType
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnCameraOpening")))
@interface SharedDyteEventTypeOnCameraOpening : SharedDyteEventType
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnFirstFrameAvailable")))
@interface SharedDyteEventTypeOnFirstFrameAvailable : SharedDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onFirstFrameAvailable __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDyteEventTypeOnFirstFrameAvailable *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingMessagesReceived")))
@interface SharedDyteEventTypeOnMeetingMessagesReceived : SharedDyteEventType
- (instancetype)initWithMessages:(NSArray<SharedDyteChatMessage *> *)messages __attribute__((swift_name("init(messages:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<SharedDyteChatMessage *> *messages __attribute__((swift_name("messages")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingPageUpdate")))
@interface SharedDyteEventTypeOnMeetingPageUpdate : SharedDyteEventType
- (instancetype)initWithIsNextPagePossible:(BOOL)isNextPagePossible isPreviousPagePossible:(BOOL)isPreviousPagePossible __attribute__((swift_name("init(isNextPagePossible:isPreviousPagePossible:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL isNextPagePossible __attribute__((swift_name("isNextPagePossible")));
@property (readonly) BOOL isPreviousPagePossible __attribute__((swift_name("isPreviousPagePossible")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingPollsReceived")))
@interface SharedDyteEventTypeOnMeetingPollsReceived : SharedDyteEventType
- (instancetype)initWithPolls:(NSArray<SharedDytePollMessage *> *)polls __attribute__((swift_name("init(polls:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<SharedDytePollMessage *> *polls __attribute__((swift_name("polls")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRecordingError")))
@interface SharedDyteEventTypeOnMeetingRecordingError : SharedDyteEventType
- (instancetype)initWithError:(SharedKotlinException *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedKotlinException *error __attribute__((swift_name("error")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRecordingStarted")))
@interface SharedDyteEventTypeOnMeetingRecordingStarted : SharedDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onMeetingRecordingStarted __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDyteEventTypeOnMeetingRecordingStarted *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRecordingStopped")))
@interface SharedDyteEventTypeOnMeetingRecordingStopped : SharedDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onMeetingRecordingStopped __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDyteEventTypeOnMeetingRecordingStopped *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRoomDisconnected")))
@interface SharedDyteEventTypeOnMeetingRoomDisconnected : SharedDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onMeetingRoomDisconnected __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDyteEventTypeOnMeetingRoomDisconnected *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRoomInitCompleted")))
@interface SharedDyteEventTypeOnMeetingRoomInitCompleted : SharedDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onMeetingRoomInitCompleted __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDyteEventTypeOnMeetingRoomInitCompleted *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRoomInitFailed")))
@interface SharedDyteEventTypeOnMeetingRoomInitFailed : SharedDyteEventType
- (instancetype)initWithException:(SharedKotlinException *)exception __attribute__((swift_name("init(exception:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedKotlinException *exception __attribute__((swift_name("exception")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRoomInitStarted")))
@interface SharedDyteEventTypeOnMeetingRoomInitStarted : SharedDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onMeetingRoomInitStarted __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDyteEventTypeOnMeetingRoomInitStarted *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRoomJoinStarted")))
@interface SharedDyteEventTypeOnMeetingRoomJoinStarted : SharedDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onMeetingRoomJoinStarted __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDyteEventTypeOnMeetingRoomJoinStarted *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRoomJoined")))
@interface SharedDyteEventTypeOnMeetingRoomJoined : SharedDyteEventType
- (instancetype)initWithParticipant:(SharedDyteMeetingParticipant *)participant meetingStartedAt:(NSString *)meetingStartedAt __attribute__((swift_name("init(participant:meetingStartedAt:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *meetingStartedAt __attribute__((swift_name("meetingStartedAt")));
@property (readonly) SharedDyteMeetingParticipant *participant __attribute__((swift_name("participant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRoomLeave")))
@interface SharedDyteEventTypeOnMeetingRoomLeave : SharedDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onMeetingRoomLeave __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDyteEventTypeOnMeetingRoomLeave *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRoomLeaveStarted")))
@interface SharedDyteEventTypeOnMeetingRoomLeaveStarted : SharedDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onMeetingRoomLeaveStarted __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDyteEventTypeOnMeetingRoomLeaveStarted *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingStateChanged")))
@interface SharedDyteEventTypeOnMeetingStateChanged : SharedDyteEventType
- (instancetype)initWithState:(NSString *)state isReconnected:(BOOL)isReconnected __attribute__((swift_name("init(state:isReconnected:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL isReconnected __attribute__((swift_name("isReconnected")));
@property (readonly) NSString *state __attribute__((swift_name("state")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnNewMeetingMessageReceived")))
@interface SharedDyteEventTypeOnNewMeetingMessageReceived : SharedDyteEventType
- (instancetype)initWithMessage:(SharedDyteChatMessage *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedDyteChatMessage *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnNewMeetingPollReceived")))
@interface SharedDyteEventTypeOnNewMeetingPollReceived : SharedDyteEventType
- (instancetype)initWithPoll:(SharedDytePollMessage *)poll __attribute__((swift_name("init(poll:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedDytePollMessage *poll __attribute__((swift_name("poll")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnNoActiveSpeaker")))
@interface SharedDyteEventTypeOnNoActiveSpeaker : SharedDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onNoActiveSpeaker __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDyteEventTypeOnNoActiveSpeaker *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnPeerAudioUpdate")))
@interface SharedDyteEventTypeOnPeerAudioUpdate : SharedDyteEventType
- (instancetype)initWithParticipant:(SharedDyteMeetingParticipant *)participant __attribute__((swift_name("init(participant:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedDyteMeetingParticipant *participant __attribute__((swift_name("participant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnPeerJoin")))
@interface SharedDyteEventTypeOnPeerJoin : SharedDyteEventType
- (instancetype)initWithParticipant:(SharedDyteMeetingParticipant *)participant __attribute__((swift_name("init(participant:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedDyteMeetingParticipant *participant __attribute__((swift_name("participant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnPeerLeft")))
@interface SharedDyteEventTypeOnPeerLeft : SharedDyteEventType
- (instancetype)initWithParticipant:(SharedDyteMeetingParticipant *)participant __attribute__((swift_name("init(participant:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedDyteMeetingParticipant *participant __attribute__((swift_name("participant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnPeerPinned")))
@interface SharedDyteEventTypeOnPeerPinned : SharedDyteEventType
- (instancetype)initWithParticipant:(SharedDyteMeetingParticipant *)participant __attribute__((swift_name("init(participant:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedDyteMeetingParticipant *participant __attribute__((swift_name("participant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnPeerScreenShareUpdate")))
@interface SharedDyteEventTypeOnPeerScreenShareUpdate : SharedDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onPeerScreenShareUpdate __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDyteEventTypeOnPeerScreenShareUpdate *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnPeerUnpinned")))
@interface SharedDyteEventTypeOnPeerUnpinned : SharedDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onPeerUnpinned __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDyteEventTypeOnPeerUnpinned *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnPeerUpdated")))
@interface SharedDyteEventTypeOnPeerUpdated : SharedDyteEventType
- (instancetype)initWithParticipant:(SharedDyteMeetingParticipant *)participant __attribute__((swift_name("init(participant:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedDyteMeetingParticipant *participant __attribute__((swift_name("participant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnPeerVideoUpdate")))
@interface SharedDyteEventTypeOnPeerVideoUpdate : SharedDyteEventType
- (instancetype)initWithParticipant:(SharedDyteMeetingParticipant *)participant __attribute__((swift_name("init(participant:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedDyteMeetingParticipant *participant __attribute__((swift_name("participant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnPermissionsUpdated")))
@interface SharedDyteEventTypeOnPermissionsUpdated : SharedDyteEventType
- (instancetype)initWithPermissions:(NSArray<SharedPermission *> *)permissions __attribute__((swift_name("init(permissions:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<SharedPermission *> *permissions __attribute__((swift_name("permissions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnProximityChanged")))
@interface SharedDyteEventTypeOnProximityChanged : SharedDyteEventType
- (instancetype)initWithIsNear:(BOOL)isNear __attribute__((swift_name("init(isNear:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL isNear __attribute__((swift_name("isNear")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnSelfAudioUpdate")))
@interface SharedDyteEventTypeOnSelfAudioUpdate : SharedDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onSelfAudioUpdate __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDyteEventTypeOnSelfAudioUpdate *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnSelfVideoUpdate")))
@interface SharedDyteEventTypeOnSelfVideoUpdate : SharedDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onSelfVideoUpdate __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDyteEventTypeOnSelfVideoUpdate *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteRecordingState")))
@interface SharedDyteRecordingState : SharedKotlinEnum<SharedDyteRecordingState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedDyteRecordingState *idle __attribute__((swift_name("idle")));
@property (class, readonly) SharedDyteRecordingState *starting __attribute__((swift_name("starting")));
@property (class, readonly) SharedDyteRecordingState *recording __attribute__((swift_name("recording")));
@property (class, readonly) SharedDyteRecordingState *stopping __attribute__((swift_name("stopping")));
+ (SharedKotlinArray<SharedDyteRecordingState *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("IChatController")))
@protocol SharedIChatController
@required
- (void)handleChatMessagesDyteChatMessages:(SharedWebSocketChatMessagesModel *)dyteChatMessages __attribute__((swift_name("handleChatMessages(dyteChatMessages:)")));
- (void)handleNewChatMessageDyteChatMessage:(SharedWebSocketChatMessage *)dyteChatMessage __attribute__((swift_name("handleNewChatMessage(dyteChatMessage:)")));
- (void)loadChatMessages __attribute__((swift_name("loadChatMessages()")));
- (void)sendFileMessageFileName:(NSString *)fileName filePath:(NSString *)filePath __attribute__((swift_name("sendFileMessage(fileName:filePath:)")));
- (void)sendMessageMessage:(NSString *)message __attribute__((swift_name("sendMessage(message:)")));
@property (readonly) SharedDyteChat *dyteChat __attribute__((swift_name("dyteChat")));
@end;

__attribute__((swift_name("IConnectionController")))
@protocol SharedIConnectionController
@required
- (void)onCallConnected __attribute__((swift_name("onCallConnected()")));
- (void)onCallLeft __attribute__((swift_name("onCallLeft()")));
- (void)onReceiveTransportStateChangedState:(NSString *)state __attribute__((swift_name("onReceiveTransportStateChanged(state:)")));
- (void)onSendTransportStateChangedState:(NSString *)state __attribute__((swift_name("onSendTransportStateChanged(state:)")));
- (void)onSocketStateChangedSocketState:(NSString *)socketState __attribute__((swift_name("onSocketStateChanged(socketState:)")));
@end;

__attribute__((swift_name("IControllerContainer")))
@protocol SharedIControllerContainer
@required
@property (readonly) id<SharedIApiClient> apiClient __attribute__((swift_name("apiClient")));
@property (readonly) id<SharedIChatController> chatController __attribute__((swift_name("chatController")));
@property (readonly) id<SharedIConnectionController> connectionController __attribute__((swift_name("connectionController")));
@property (readonly) SharedControllerOptions *controllerOptions __attribute__((swift_name("controllerOptions")));
@property (readonly) id<SharedIEventController> eventController __attribute__((swift_name("eventController")));
@property (readonly) id<SharedIHostController> hostController __attribute__((swift_name("hostController")));
@property (readonly) id<SharedIMetaController> metaController __attribute__((swift_name("metaController")));
@property (readonly) id<SharedIParticipantController> participantController __attribute__((swift_name("participantController")));
@property (readonly) id<SharedIPermissionController> permissionController __attribute__((swift_name("permissionController")));
@property (readonly) id<SharedIDytePlatformUtilsProvider> platformUtilsProvider __attribute__((swift_name("platformUtilsProvider")));
@property (readonly) id<SharedIPollController> pollsController __attribute__((swift_name("pollsController")));
@property (readonly) id<SharedIPresetController> presetController __attribute__((swift_name("presetController")));
@property (readonly) id<SharedIRecordingController> recordingController __attribute__((swift_name("recordingController")));
@property (readonly) id<SharedIRoomNodeController> roomNodeController __attribute__((swift_name("roomNodeController")));
@property (readonly) id<SharedISelfController> selfController __attribute__((swift_name("selfController")));
@property (readonly) id<SharedISocketController> socketController __attribute__((swift_name("socketController")));
@property (readonly) id<SharedISocketMessageResponseParser> socketMessageResponseParser __attribute__((swift_name("socketMessageResponseParser")));
@end;

__attribute__((swift_name("IEventController")))
@protocol SharedIEventController
@required
- (void)addCameraEventListenerCameraEventsListener:(id<SharedDyteCameraEventsListener>)cameraEventsListener __attribute__((swift_name("addCameraEventListener(cameraEventsListener:)")));
- (void)addParticipantEventListenerParticipantEventsListener:(id<SharedDyteParticipantEventsListener>)participantEventsListener __attribute__((swift_name("addParticipantEventListener(participantEventsListener:)")));
- (void)addPermissionEventListenerPermissionEventsListener:(id<SharedDytePermissionEventsListener>)permissionEventsListener __attribute__((swift_name("addPermissionEventListener(permissionEventsListener:)")));
- (void)addRoomEventListenerRoomEventsListener:(id<SharedDyteMeetingRoomEventsListener>)roomEventsListener __attribute__((swift_name("addRoomEventListener(roomEventsListener:)")));
- (void)addSelfEventListenerSelfEventListener:(id<SharedDyteSelfEventsListener>)selfEventListener __attribute__((swift_name("addSelfEventListener(selfEventListener:)")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)removeCameraEventListenerCameraEventsListener:(id<SharedDyteCameraEventsListener>)cameraEventsListener __attribute__((swift_name("removeCameraEventListener(cameraEventsListener:)")));
- (void)removeParticipantEventListenerParticipantEventsListener:(id<SharedDyteParticipantEventsListener>)participantEventsListener __attribute__((swift_name("removeParticipantEventListener(participantEventsListener:)")));
- (void)removePermissionEventListenerPermissionEventsListener:(id<SharedDytePermissionEventsListener>)permissionEventsListener __attribute__((swift_name("removePermissionEventListener(permissionEventsListener:)")));
- (void)removeRoomEventListenerRoomEventsListener:(id<SharedDyteMeetingRoomEventsListener>)roomEventsListener __attribute__((swift_name("removeRoomEventListener(roomEventsListener:)")));
- (void)removeSelfEventListenerSelfEventListener:(id<SharedDyteSelfEventsListener>)selfEventListener __attribute__((swift_name("removeSelfEventListener(selfEventListener:)")));
- (void)triggerEventEventType:(SharedDyteEventType *)eventType __attribute__((swift_name("triggerEvent(eventType:)")));
@property (readonly) NSArray<id<SharedDyteCameraEventsListener>> *cameraEventsListeners __attribute__((swift_name("cameraEventsListeners")));
@property (readonly) NSArray<id<SharedDyteParticipantEventsListener>> *participantEventsListeners __attribute__((swift_name("participantEventsListeners")));
@property (readonly) NSArray<id<SharedDytePermissionEventsListener>> *permissionEventsListeners __attribute__((swift_name("permissionEventsListeners")));
@property (readonly) NSArray<id<SharedDyteMeetingRoomEventsListener>> *roomEventsListeners __attribute__((swift_name("roomEventsListeners")));
@property (readonly) NSArray<id<SharedDyteSelfEventsListener>> *selfEventsListeners __attribute__((swift_name("selfEventsListeners")));
@end;

__attribute__((swift_name("IHostController")))
@protocol SharedIHostController
@required
- (void)kickId:(NSString *)id __attribute__((swift_name("kick(id:)")));
- (void)kickAll __attribute__((swift_name("kickAll()")));
- (void)muteAllAudioAllowUnmute:(BOOL)allowUnmute __attribute__((swift_name("muteAllAudio(allowUnmute:)")));
- (void)muteAllVideo __attribute__((swift_name("muteAllVideo()")));
- (void)muteAudioDyteMeetingParticipant:(SharedDyteMeetingParticipant *)dyteMeetingParticipant __attribute__((swift_name("muteAudio(dyteMeetingParticipant:)")));
- (void)muteVideoDyteMeetingParticipant:(SharedDyteMeetingParticipant *)dyteMeetingParticipant __attribute__((swift_name("muteVideo(dyteMeetingParticipant:)")));
@end;

__attribute__((swift_name("IMetaController")))
@protocol SharedIMetaController
@required
- (NSString *)getAuthToken __attribute__((swift_name("getAuthToken()")));
- (NSString *)getBaseUrl __attribute__((swift_name("getBaseUrl()")));
- (NSString *)getDisplayName __attribute__((swift_name("getDisplayName()")));
- (BOOL)getIsHost __attribute__((swift_name("getIsHost()")));
- (SharedDyteMeetingInfo *)getMeetingInfo __attribute__((swift_name("getMeetingInfo()")));
- (NSString *)getMeetingStatedTimestamp __attribute__((swift_name("getMeetingStatedTimestamp()")));
- (NSString *)getMeetingTitle __attribute__((swift_name("getMeetingTitle()")));
- (NSString *)getOrgId __attribute__((swift_name("getOrgId()")));
- (NSString *)getPeerId __attribute__((swift_name("getPeerId()")));
- (NSString *)getRoomName __attribute__((swift_name("getRoomName()")));
- (NSString *)getRoomType __attribute__((swift_name("getRoomType()")));
- (void)setIsHostIsHost:(BOOL)isHost __attribute__((swift_name("setIsHost(isHost:)")));
- (void)setMeetingStartedTimestampTimestamp:(NSString *)timestamp __attribute__((swift_name("setMeetingStartedTimestamp(timestamp:)")));
- (void)setMeetingTitleTitle:(NSString *)title __attribute__((swift_name("setMeetingTitle(title:)")));
- (void)setRoomTypeRoomType:(NSString *)roomType __attribute__((swift_name("setRoomType(roomType:)")));
@end;

__attribute__((swift_name("IParticipantController")))
@protocol SharedIParticipantController
@required
- (int32_t)getMaxVideoCountPerPage __attribute__((swift_name("getMaxVideoCountPerPage()")));
- (int32_t)getPageNumber __attribute__((swift_name("getPageNumber()")));
- (SharedPageViewMode *)getViewMode __attribute__((swift_name("getViewMode()")));
- (void)handleRoomStateWebSocketRoomStateModel:(SharedWebSocketRoomStateModel *)webSocketRoomStateModel __attribute__((swift_name("handleRoomState(webSocketRoomStateModel:)")));
- (void)muteAll __attribute__((swift_name("muteAll()")));
- (void)onPageLoadedWebSocketGetPageModel:(SharedWebSocketGetPageModel *)webSocketGetPageModel newPageNumber:(int32_t)newPageNumber __attribute__((swift_name("onPageLoaded(webSocketGetPageModel:newPageNumber:)")));
- (void)onParticipantStreamConnectedParticipant:(SharedDyteMeetingParticipant *)participant __attribute__((swift_name("onParticipantStreamConnected(participant:)")));
- (void)onParticipantVideoMutedWebSocketConsumerClosedModel:(SharedWebSocketConsumerClosedModel *)webSocketConsumerClosedModel __attribute__((swift_name("onParticipantVideoMuted(webSocketConsumerClosedModel:)")));
- (void)onParticipantVideoUnmutedWebSocketConsumerClosedModel:(SharedWebSocketConsumerResumedModel *)webSocketConsumerClosedModel __attribute__((swift_name("onParticipantVideoUnmuted(webSocketConsumerClosedModel:)")));
- (void)onPeerAudioMutedWebSocketPeerMuteModel:(SharedWebSocketPeerMuteModel *)webSocketPeerMuteModel __attribute__((swift_name("onPeerAudioMuted(webSocketPeerMuteModel:)")));
- (void)onPeerAudioUnmutedWebSocketPeerMuteModel:(SharedWebSocketPeerMuteModel *)webSocketPeerMuteModel __attribute__((swift_name("onPeerAudioUnmuted(webSocketPeerMuteModel:)")));
- (void)onPeerJoinedMeetingPeerUser:(SharedWebSocketMeetingPeerUser *)meetingPeerUser __attribute__((swift_name("onPeerJoined(meetingPeerUser:)")));
- (void)onPeerLeftWebSocketPeerLeftModel:(SharedWebSocketPeerLeftModel *)webSocketPeerLeftModel __attribute__((swift_name("onPeerLeft(webSocketPeerLeftModel:)")));
- (void)onPeerPinnedWebSocketPeerPinnedModel:(SharedWebSocketPeerPinnedModel *)webSocketPeerPinnedModel __attribute__((swift_name("onPeerPinned(webSocketPeerPinnedModel:)")));
- (void)onPeerScreenShareStartedParticipant:(SharedDyteMeetingParticipant *)participant __attribute__((swift_name("onPeerScreenShareStarted(participant:)")));
- (void)onPeerScreenSharedEndedParticipant:(SharedDyteMeetingParticipant *)participant __attribute__((swift_name("onPeerScreenSharedEnded(participant:)")));
- (void)onPeerUnpinned __attribute__((swift_name("onPeerUnpinned()")));
- (void)onPeerVideoMutedWebSocketProducerClosedModel:(SharedWebSocketProducerClosedModel *)webSocketProducerClosedModel __attribute__((swift_name("onPeerVideoMuted(webSocketProducerClosedModel:)")));
- (void)onPeerVideoUnMutedWebSocketProducerConnectModel:(SharedWebSocketProducerConnectModel *)webSocketProducerConnectModel __attribute__((swift_name("onPeerVideoUnMuted(webSocketProducerConnectModel:)")));
- (void)onSelectedPeersWebSocketSelectedPeersModel:(SharedWebSocketSelectedPeersModel *)webSocketSelectedPeersModel __attribute__((swift_name("onSelectedPeers(webSocketSelectedPeersModel:)")));
- (void)onSelfJoined __attribute__((swift_name("onSelfJoined()")));
- (void)onWaitlistPeerAcceptedWebSocketWaitlistPeerAccepted:(SharedWebSocketWaitlistPeerAccepted *)webSocketWaitlistPeerAccepted __attribute__((swift_name("onWaitlistPeerAccepted(webSocketWaitlistPeerAccepted:)")));
- (void)onWaitlistPeerAddedWebSocketWaitlistPeerAdded:(SharedWebSocketWaitlistPeerAdded *)webSocketWaitlistPeerAdded __attribute__((swift_name("onWaitlistPeerAdded(webSocketWaitlistPeerAdded:)")));
- (void)onWaitlistPeerClosedWebSocketWaitlistPeerClosed:(SharedWebSocketWaitlistPeerClosed *)webSocketWaitlistPeerClosed __attribute__((swift_name("onWaitlistPeerClosed(webSocketWaitlistPeerClosed:)")));
- (void)onWaitlistPeerRejectedWebSocketWaitlistPeerRejected:(SharedWebSocketWaitlistPeerRejected *)webSocketWaitlistPeerRejected __attribute__((swift_name("onWaitlistPeerRejected(webSocketWaitlistPeerRejected:)")));
- (void)setPageNewPageNumber:(int32_t)newPageNumber __attribute__((swift_name("setPage(newPageNumber:)")));
- (void)setViewModePageViewMode:(SharedPageViewMode *)pageViewMode __attribute__((swift_name("setViewMode(pageViewMode:)")));
- (BOOL)shouldShowPaginator __attribute__((swift_name("shouldShowPaginator()")));
@property (readonly) SharedDyteRoomParticipants *meetingRoomParticipants __attribute__((swift_name("meetingRoomParticipants")));
@end;

__attribute__((swift_name("IPermissionController")))
@protocol SharedIPermissionController
@required
- (BOOL)arePermissionsGranted __attribute__((swift_name("arePermissionsGranted()")));
- (void)askPermissionsList:(NSArray<SharedPermissionType *> *)list onPermissionGranted:(void (^)(void))onPermissionGranted onPermissionDenied:(void (^)(void))onPermissionDenied __attribute__((swift_name("askPermissions(list:onPermissionGranted:onPermissionDenied:)")));
- (BOOL)isPermissionGratedPermissionType:(SharedPermissionType *)permissionType __attribute__((swift_name("isPermissionGrated(permissionType:)")));
@property (readonly) NSArray<SharedPermission *> *permissions __attribute__((swift_name("permissions")));
@end;

__attribute__((swift_name("IPollController")))
@protocol SharedIPollController
@required
- (void)createQuestion:(NSString *)question options:(NSArray<NSString *> *)options anonymous:(BOOL)anonymous hideVotes:(BOOL)hideVotes __attribute__((swift_name("create(question:options:anonymous:hideVotes:)")));
- (void)loadPolls __attribute__((swift_name("loadPolls()")));
- (void)onNewPollWebsocketPoll:(SharedWebSocketPoll *)websocketPoll __attribute__((swift_name("onNewPoll(websocketPoll:)")));
- (void)voteDytePollMessage:(SharedDytePollMessage *)dytePollMessage dytePollOption:(SharedDytePollOption *)dytePollOption __attribute__((swift_name("vote(dytePollMessage:dytePollOption:)")));
@property (readonly) NSArray<SharedDytePollMessage *> *polls __attribute__((swift_name("polls")));
@end;

__attribute__((swift_name("IPresetController")))
@protocol SharedIPresetController
@required
- (BOOL)canCreatePoll __attribute__((swift_name("canCreatePoll()")));
- (BOOL)canPublishAudio __attribute__((swift_name("canPublishAudio()")));
- (BOOL)canPublishVideo __attribute__((swift_name("canPublishVideo()")));
- (BOOL)canRecord __attribute__((swift_name("canRecord()")));
- (BOOL)canSendChatFile __attribute__((swift_name("canSendChatFile()")));
- (BOOL)canSendChatText __attribute__((swift_name("canSendChatText()")));
- (BOOL)canSendPublicTextMessages __attribute__((swift_name("canSendPublicTextMessages()")));
- (BOOL)canStartPlugins __attribute__((swift_name("canStartPlugins()")));
- (BOOL)canViewPoll __attribute__((swift_name("canViewPoll()")));
- (BOOL)canVoteOnPoll __attribute__((swift_name("canVoteOnPoll()")));
- (BOOL)closePlugins __attribute__((swift_name("closePlugins()")));
- (int32_t)getMaxVideoCount __attribute__((swift_name("getMaxVideoCount()")));
@property (readonly) SharedUserPresetModel *permission __attribute__((swift_name("permission")));
@end;

__attribute__((swift_name("IRecordingController")))
@protocol SharedIRecordingController
@required
- (void)fetchRecordingData __attribute__((swift_name("fetchRecordingData()")));
- (SharedDyteRecordingState *)getState __attribute__((swift_name("getState()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)startWithCompletionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("start(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)stopWithCompletionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("stop(completionHandler:)")));
@end;

__attribute__((swift_name("IRoomNodeController")))
@protocol SharedIRoomNodeController
@required
- (void)joinRoom __attribute__((swift_name("joinRoom_()")));
@end;

__attribute__((swift_name("ISelfController")))
@protocol SharedISelfController
@required
- (void)disableAudio __attribute__((swift_name("disableAudio_()")));
- (void)disableVideo __attribute__((swift_name("disableVideo_()")));
- (void)enableAudio __attribute__((swift_name("enableAudio()")));
- (void)enableVideo __attribute__((swift_name("enableVideo()")));
- (NSArray<SharedDyteAudioDevice *> *)getAudioDevices __attribute__((swift_name("getAudioDevices()")));
- (SharedDyteAudioDevice *)getSelectedAudioDevice __attribute__((swift_name("getSelectedAudioDevice()")));
- (SharedDyteVideoDevice *)getSelectedVideoDevice __attribute__((swift_name("getSelectedVideoDevice()")));
- (SharedDyteSelfParticipant *)getSelf __attribute__((swift_name("getSelf()")));
- (NSArray<SharedDyteVideoDevice *> *)getVideoDevices __attribute__((swift_name("getVideoDevices()")));
- (void)onAudioDevicesChanged __attribute__((swift_name("onAudioDevicesChanged()")));
- (void)onAudioDisabled __attribute__((swift_name("onAudioDisabled()")));
- (void)onAudioEnabled __attribute__((swift_name("onAudioEnabled()")));
- (void)onVideoDevicesChanged __attribute__((swift_name("onVideoDevicesChanged()")));
- (void)onVideoDisabled __attribute__((swift_name("onVideoDisabled()")));
- (void)onVideoEnabledVideoProducerId:(NSString *)videoProducerId __attribute__((swift_name("onVideoEnabled(videoProducerId:)")));
- (void)setDeviceDyteAndroidDevice:(SharedDyteAudioDevice *)dyteAndroidDevice __attribute__((swift_name("setDevice(dyteAndroidDevice:)")));
- (void)setDeviceDye:(SharedDyteVideoDevice *)dye __attribute__((swift_name("setDevice(dye:)")));
@end;

__attribute__((swift_name("ISocketController")))
@protocol SharedISocketController
@required
- (void)connect __attribute__((swift_name("connect()")));
- (void)disconnect __attribute__((swift_name("disconnect()")));
- (NSString *)sendMessageSyncOutboundMeetingEventType:(SharedOutboundMeetingEventType *)outboundMeetingEventType payload:(SharedKotlinx_serialization_jsonJsonElement * _Nullable)payload __attribute__((swift_name("sendMessageSync(outboundMeetingEventType:payload:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageViewMode")))
@interface SharedPageViewMode : SharedKotlinEnum<SharedPageViewMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedPageViewMode *grid __attribute__((swift_name("grid")));
@property (class, readonly) SharedPageViewMode *paginated __attribute__((swift_name("paginated")));
+ (SharedKotlinArray<SharedPageViewMode *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Permission")))
@interface SharedPermission : SharedBase
- (instancetype)initWithType:(SharedPermissionType *)type isGranted:(BOOL)isGranted __attribute__((swift_name("init(type:isGranted:)"))) __attribute__((objc_designated_initializer));
- (SharedPermissionType *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (SharedPermission *)doCopyType:(SharedPermissionType *)type isGranted:(BOOL)isGranted __attribute__((swift_name("doCopy(type:isGranted:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL isGranted __attribute__((swift_name("isGranted")));
@property (readonly) SharedPermissionType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PermissionType")))
@interface SharedPermissionType : SharedKotlinEnum<SharedPermissionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedPermissionType *camera __attribute__((swift_name("camera")));
@property (class, readonly) SharedPermissionType *microphone __attribute__((swift_name("microphone")));
@property (class, readonly) SharedPermissionType *storage __attribute__((swift_name("storage")));
+ (SharedKotlinArray<SharedPermissionType *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@end;

__attribute__((swift_name("ISocketMessageResponseParser")))
@protocol SharedISocketMessageResponseParser
@required
- (SharedInboundMeetingEvent *)parseResponseResponse:(NSString *)response __attribute__((swift_name("parseResponse(response:)")));
@end;

__attribute__((swift_name("Mapper")))
@protocol SharedMapper
@required
- (id _Nullable)mapperArray:(SharedKotlinArray<id> *)array __attribute__((swift_name("mapper(array:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Socket")))
@interface SharedSocket : SharedBase
- (instancetype)initWithEndpoint:(NSString *)endpoint config:(SharedSocketOptions * _Nullable)config build:(void (^)(id<SharedSocketBuilder>))build __attribute__((swift_name("init(endpoint:config:build:)"))) __attribute__((objc_designated_initializer));
- (void)connect __attribute__((swift_name("connect()")));
- (void)disconnect __attribute__((swift_name("disconnect()")));
- (void)emitEvent:(NSString *)event data:(NSString *)data __attribute__((swift_name("emit(event:data:)")));
- (void)emitEvent:(NSString *)event data_:(NSArray<SharedKotlinx_serialization_jsonJsonElement *> *)data __attribute__((swift_name("emit(event:data_:)")));
- (void)emitEvent:(NSString *)event data__:(NSDictionary<NSString *, SharedKotlinx_serialization_jsonJsonElement *> *)data __attribute__((swift_name("emit(event:data__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitAckEvent:(NSString *)event data:(NSString *)data completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("emitAck(event:data:completionHandler:)")));
- (BOOL)isConnected __attribute__((swift_name("isConnected()")));
@end;

__attribute__((swift_name("SocketAckCallback")))
@protocol SharedSocketAckCallback
@required
- (void)callResponse:(NSString * _Nullable)response __attribute__((swift_name("call(response:)")));
@end;

__attribute__((swift_name("SocketBuilder")))
@protocol SharedSocketBuilder
@required
- (void)onSocketEvent:(SharedSocketEvent<id> *)socketEvent action:(void (^)(SharedSocket *, id _Nullable))action __attribute__((swift_name("on(socketEvent:action:)")));
- (void)onEvent:(NSString *)event action:(void (^)(SharedSocket *, NSString *, SharedKotlinUnit *(^)(void)))action __attribute__((swift_name("on(event:action:)")));
@end;

__attribute__((swift_name("SocketEvent")))
@interface SharedSocketEvent<T> : SharedBase <SharedMapper>
@property (class, readonly, getter=companion) SharedSocketEventCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<NSString *> *socketIoEvents __attribute__((swift_name("socketIoEvents")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEventCompanion")))
@interface SharedSocketEventCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSocketEventCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *EVENT_CONNECT __attribute__((swift_name("EVENT_CONNECT")));
@property (readonly) NSString *EVENT_CONNECTING __attribute__((swift_name("EVENT_CONNECTING")));
@property (readonly) NSString *EVENT_CONNECT_ERROR __attribute__((swift_name("EVENT_CONNECT_ERROR")));
@property (readonly) NSString *EVENT_DISCONNECT __attribute__((swift_name("EVENT_DISCONNECT")));
@property (readonly) NSString *EVENT_ERROR __attribute__((swift_name("EVENT_ERROR")));
@property (readonly) NSString *EVENT_MESSAGE __attribute__((swift_name("EVENT_MESSAGE")));
@property (readonly) NSString *EVENT_PING __attribute__((swift_name("EVENT_PING")));
@property (readonly) NSString *EVENT_PONG __attribute__((swift_name("EVENT_PONG")));
@property (readonly) NSString *EVENT_RECONNECT __attribute__((swift_name("EVENT_RECONNECT")));
@property (readonly) NSString *EVENT_RECONNECT_ATTEMPT __attribute__((swift_name("EVENT_RECONNECT_ATTEMPT")));
@property (readonly) NSString *EVENT_RECONNECT_ERROR __attribute__((swift_name("EVENT_RECONNECT_ERROR")));
@property (readonly) NSString *EVENT_RECONNECT_FAILED __attribute__((swift_name("EVENT_RECONNECT_FAILED")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEventConnect")))
@interface SharedSocketEventConnect : SharedSocketEvent<SharedKotlinUnit *> <SharedMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)connect __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSocketEventConnect *shared __attribute__((swift_name("shared")));
- (SharedKotlinUnit *)mapperArray:(SharedKotlinArray<id> *)array __attribute__((swift_name("mapper(array:)")));
@property (readonly) NSArray<NSString *> *socketIoEvents __attribute__((swift_name("socketIoEvents")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEventConnecting")))
@interface SharedSocketEventConnecting : SharedSocketEvent<SharedKotlinUnit *> <SharedMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)connecting __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSocketEventConnecting *shared __attribute__((swift_name("shared")));
- (SharedKotlinUnit *)mapperArray:(SharedKotlinArray<id> *)array __attribute__((swift_name("mapper(array:)")));
@property (readonly) NSArray<NSString *> *socketIoEvents __attribute__((swift_name("socketIoEvents")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEventDisconnect")))
@interface SharedSocketEventDisconnect : SharedSocketEvent<SharedKotlinUnit *> <SharedMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)disconnect __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSocketEventDisconnect *shared __attribute__((swift_name("shared")));
- (SharedKotlinUnit *)mapperArray:(SharedKotlinArray<id> *)array __attribute__((swift_name("mapper(array:)")));
@property (readonly) NSArray<NSString *> *socketIoEvents __attribute__((swift_name("socketIoEvents")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEventError")))
@interface SharedSocketEventError : SharedSocketEvent<id>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)error __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSocketEventError *shared __attribute__((swift_name("shared")));
- (id)mapperArray:(SharedKotlinArray<id> *)array __attribute__((swift_name("mapper(array:)")));
@property (readonly) NSArray<NSString *> *socketIoEvents __attribute__((swift_name("socketIoEvents")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEventMessage")))
@interface SharedSocketEventMessage : SharedSocketEvent<id>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)message __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSocketEventMessage *shared __attribute__((swift_name("shared")));
- (id)mapperArray:(SharedKotlinArray<id> *)array __attribute__((swift_name("mapper(array:)")));
@property (readonly) NSArray<NSString *> *socketIoEvents __attribute__((swift_name("socketIoEvents")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEventPing")))
@interface SharedSocketEventPing : SharedSocketEvent<SharedKotlinUnit *> <SharedMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ping __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSocketEventPing *shared __attribute__((swift_name("shared")));
- (SharedKotlinUnit *)mapperArray:(SharedKotlinArray<id> *)array __attribute__((swift_name("mapper(array:)")));
@property (readonly) NSArray<NSString *> *socketIoEvents __attribute__((swift_name("socketIoEvents")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEventPong")))
@interface SharedSocketEventPong : SharedSocketEvent<SharedKotlinUnit *> <SharedMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pong __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSocketEventPong *shared __attribute__((swift_name("shared")));
- (SharedKotlinUnit *)mapperArray:(SharedKotlinArray<id> *)array __attribute__((swift_name("mapper(array:)")));
@property (readonly) NSArray<NSString *> *socketIoEvents __attribute__((swift_name("socketIoEvents")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEventReconnect")))
@interface SharedSocketEventReconnect : SharedSocketEvent<SharedKotlinUnit *> <SharedMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reconnect __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSocketEventReconnect *shared __attribute__((swift_name("shared")));
- (SharedKotlinUnit *)mapperArray:(SharedKotlinArray<id> *)array __attribute__((swift_name("mapper(array:)")));
@property (readonly) NSArray<NSString *> *socketIoEvents __attribute__((swift_name("socketIoEvents")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEventReconnectAttempt")))
@interface SharedSocketEventReconnectAttempt : SharedSocketEvent<SharedInt *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reconnectAttempt __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSocketEventReconnectAttempt *shared __attribute__((swift_name("shared")));
- (SharedInt *)mapperArray:(SharedKotlinArray<id> *)array __attribute__((swift_name("mapper(array:)")));
@property (readonly) NSArray<NSString *> *socketIoEvents __attribute__((swift_name("socketIoEvents")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketMessageResponseParser")))
@interface SharedSocketMessageResponseParser : SharedBase <SharedISocketMessageResponseParser>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedInboundMeetingEvent *)parseResponseResponse:(NSString *)response __attribute__((swift_name("parseResponse(response:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketOptions")))
@interface SharedSocketOptions : SharedBase
- (instancetype)initWithQueryParams:(NSDictionary<NSString *, NSString *> * _Nullable)queryParams transport:(SharedSocketOptionsTransport *)transport __attribute__((swift_name("init(queryParams:transport:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, NSString *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedSocketOptionsTransport *)component2 __attribute__((swift_name("component2()")));
- (SharedSocketOptions *)doCopyQueryParams:(NSDictionary<NSString *, NSString *> * _Nullable)queryParams transport:(SharedSocketOptionsTransport *)transport __attribute__((swift_name("doCopy(queryParams:transport:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable queryParams __attribute__((swift_name("queryParams")));
@property (readonly) SharedSocketOptionsTransport *transport __attribute__((swift_name("transport")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketOptions.Transport")))
@interface SharedSocketOptionsTransport : SharedKotlinEnum<SharedSocketOptionsTransport *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSocketOptionsTransport *websocket __attribute__((swift_name("websocket")));
@property (class, readonly) SharedSocketOptionsTransport *polling __attribute__((swift_name("polling")));
@property (class, readonly) SharedSocketOptionsTransport *default_ __attribute__((swift_name("default_")));
+ (SharedKotlinArray<SharedSocketOptionsTransport *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InboundMeetingEventType")))
@interface SharedInboundMeetingEventType : SharedKotlinEnum<SharedInboundMeetingEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedInboundMeetingEventType *webSocketRoomState __attribute__((swift_name("webSocketRoomState")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketRouterCapability __attribute__((swift_name("webSocketRouterCapability")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketCreateTransport __attribute__((swift_name("webSocketCreateTransport")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketJoinRoom __attribute__((swift_name("webSocketJoinRoom")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketPeerJoined __attribute__((swift_name("webSocketPeerJoined")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketPeerLeft __attribute__((swift_name("webSocketPeerLeft")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketActiveSpeaker __attribute__((swift_name("webSocketActiveSpeaker")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketNoActiveSpeaker __attribute__((swift_name("webSocketNoActiveSpeaker")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketPeerPinned __attribute__((swift_name("webSocketPeerPinned")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketRecordingStarted __attribute__((swift_name("webSocketRecordingStarted")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketRecordingStopped __attribute__((swift_name("webSocketRecordingStopped")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketWaitlistPeerAdded __attribute__((swift_name("webSocketWaitlistPeerAdded")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketWaitlistPeerAccepted __attribute__((swift_name("webSocketWaitlistPeerAccepted")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketWaitlistPeerRejected __attribute__((swift_name("webSocketWaitlistPeerRejected")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketWaitlistPeerClosed __attribute__((swift_name("webSocketWaitlistPeerClosed")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketSelectedPeers __attribute__((swift_name("webSocketSelectedPeers")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketNewConsumer __attribute__((swift_name("webSocketNewConsumer")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketResumeConsumer __attribute__((swift_name("webSocketResumeConsumer")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketCloseConsumer __attribute__((swift_name("webSocketCloseConsumer")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketPauseConsumer __attribute__((swift_name("webSocketPauseConsumer")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketConnectTransport __attribute__((swift_name("webSocketConnectTransport")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketProducerConnect __attribute__((swift_name("webSocketProducerConnect")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketProducerClosed __attribute__((swift_name("webSocketProducerClosed")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketPeerMuted __attribute__((swift_name("webSocketPeerMuted")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketPeerUnmuted __attribute__((swift_name("webSocketPeerUnmuted")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketMuteAllVideo __attribute__((swift_name("webSocketMuteAllVideo")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketMuteAllAudio __attribute__((swift_name("webSocketMuteAllAudio")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketOnChatMessages __attribute__((swift_name("webSocketOnChatMessages")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketOnChatMessage __attribute__((swift_name("webSocketOnChatMessage")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketOnPoll __attribute__((swift_name("webSocketOnPoll")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketOnPolls __attribute__((swift_name("webSocketOnPolls")));
@property (class, readonly) SharedInboundMeetingEventType *webSocketGetPage __attribute__((swift_name("webSocketGetPage")));
+ (SharedKotlinArray<SharedInboundMeetingEventType *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutboundMeetingEventType")))
@interface SharedOutboundMeetingEventType : SharedKotlinEnum<SharedOutboundMeetingEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedOutboundMeetingEventType *getRoomState __attribute__((swift_name("getRoomState")));
@property (class, readonly) SharedOutboundMeetingEventType *getRouterRtpCapabilities __attribute__((swift_name("getRouterRtpCapabilities")));
@property (class, readonly) SharedOutboundMeetingEventType *createWebRtcTransport __attribute__((swift_name("createWebRtcTransport")));
@property (class, readonly) SharedOutboundMeetingEventType *joinRoom __attribute__((swift_name("joinRoom")));
@property (class, readonly) SharedOutboundMeetingEventType *connectWebRtcTransport __attribute__((swift_name("connectWebRtcTransport")));
@property (class, readonly) SharedOutboundMeetingEventType *produce __attribute__((swift_name("produce")));
@property (class, readonly) SharedOutboundMeetingEventType *muteVideo __attribute__((swift_name("muteVideo")));
@property (class, readonly) SharedOutboundMeetingEventType *muteSelfAudio __attribute__((swift_name("muteSelfAudio")));
@property (class, readonly) SharedOutboundMeetingEventType *unMuteSelfAudio __attribute__((swift_name("unMuteSelfAudio")));
@property (class, readonly) SharedOutboundMeetingEventType *getChatMessages __attribute__((swift_name("getChatMessages")));
@property (class, readonly) SharedOutboundMeetingEventType *sendChatMessage __attribute__((swift_name("sendChatMessage")));
@property (class, readonly) SharedOutboundMeetingEventType *votePoll __attribute__((swift_name("votePoll")));
@property (class, readonly) SharedOutboundMeetingEventType *getPolls __attribute__((swift_name("getPolls")));
@property (class, readonly) SharedOutboundMeetingEventType *theNewPoll __attribute__((swift_name("theNewPoll")));
@property (class, readonly) SharedOutboundMeetingEventType *getPage __attribute__((swift_name("getPage")));
@property (class, readonly) SharedOutboundMeetingEventType *muteAllVideo __attribute__((swift_name("muteAllVideo")));
@property (class, readonly) SharedOutboundMeetingEventType *muteAllAudio __attribute__((swift_name("muteAllAudio")));
@property (class, readonly) SharedOutboundMeetingEventType *kickAll __attribute__((swift_name("kickAll")));
@property (class, readonly) SharedOutboundMeetingEventType *mutePeerAudio __attribute__((swift_name("mutePeerAudio")));
@property (class, readonly) SharedOutboundMeetingEventType *mutePeerVideo __attribute__((swift_name("mutePeerVideo")));
@property (class, readonly) SharedOutboundMeetingEventType *kickPeer __attribute__((swift_name("kickPeer")));
+ (SharedKotlinArray<SharedOutboundMeetingEventType *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("BasePayloadModel")))
@interface SharedBasePayloadModel : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InboundMeetingEvent")))
@interface SharedInboundMeetingEvent : SharedBase
- (instancetype)initWithEventType:(SharedInboundMeetingEventType *)eventType payload:(SharedBasePayloadModel *)payload __attribute__((swift_name("init(eventType:payload:)"))) __attribute__((objc_designated_initializer));
- (SharedInboundMeetingEventType *)component1 __attribute__((swift_name("component1()")));
- (SharedBasePayloadModel *)component2 __attribute__((swift_name("component2()")));
- (SharedInboundMeetingEvent *)doCopyEventType:(SharedInboundMeetingEventType *)eventType payload:(SharedBasePayloadModel *)payload __attribute__((swift_name("doCopy(eventType:payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedInboundMeetingEventType *eventType __attribute__((swift_name("eventType")));
@property (readonly) SharedBasePayloadModel *payload __attribute__((swift_name("payload")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutboundMeetingEvents")))
@interface SharedOutboundMeetingEvents : SharedKotlinEnum<SharedOutboundMeetingEvents *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedOutboundMeetingEvents *sendMessage __attribute__((swift_name("sendMessage")));
+ (SharedKotlinArray<SharedOutboundMeetingEvents *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseModel")))
@interface SharedResponseModel : SharedBase
- (instancetype)initWithType:(NSString *)type payload:(NSDictionary<NSString *, SharedKotlinx_serialization_jsonJsonElement *> *)payload __attribute__((swift_name("init(type:payload:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedResponseModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSDictionary<NSString *, SharedKotlinx_serialization_jsonJsonElement *> *)component2 __attribute__((swift_name("component2()")));
- (SharedResponseModel *)doCopyType:(NSString *)type payload:(NSDictionary<NSString *, SharedKotlinx_serialization_jsonJsonElement *> *)payload __attribute__((swift_name("doCopy(type:payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, SharedKotlinx_serialization_jsonJsonElement *> *payload __attribute__((swift_name("payload")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseModel.Companion")))
@interface SharedResponseModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedResponseModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConsumerAppData")))
@interface SharedConsumerAppData : SharedBase
- (instancetype)initWithScreenShare:(SharedBoolean * _Nullable)screenShare peerId:(NSString *)peerId __attribute__((swift_name("init(screenShare:peerId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedConsumerAppDataCompanion *companion __attribute__((swift_name("companion")));
- (SharedBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedConsumerAppData *)doCopyScreenShare:(SharedBoolean * _Nullable)screenShare peerId:(NSString *)peerId __attribute__((swift_name("doCopy(screenShare:peerId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *peerId __attribute__((swift_name("peerId")));
@property (readonly) SharedBoolean * _Nullable screenShare __attribute__((swift_name("screenShare")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConsumerAppData.Companion")))
@interface SharedConsumerAppDataCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedConsumerAppDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConsumerRtpParameters")))
@interface SharedConsumerRtpParameters : SharedBase
- (instancetype)initWithCodecs:(NSArray<SharedCodec *> * _Nullable)codecs headerExtensions:(NSArray<SharedHeaderExtension *> * _Nullable)headerExtensions encodings:(NSArray<SharedEncodings *> * _Nullable)encodings rtcp:(SharedRtcp * _Nullable)rtcp mid:(NSString * _Nullable)mid __attribute__((swift_name("init(codecs:headerExtensions:encodings:rtcp:mid:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedConsumerRtpParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<SharedCodec *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedHeaderExtension *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedEncodings *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedRtcp * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedConsumerRtpParameters *)doCopyCodecs:(NSArray<SharedCodec *> * _Nullable)codecs headerExtensions:(NSArray<SharedHeaderExtension *> * _Nullable)headerExtensions encodings:(NSArray<SharedEncodings *> * _Nullable)encodings rtcp:(SharedRtcp * _Nullable)rtcp mid:(NSString * _Nullable)mid __attribute__((swift_name("doCopy(codecs:headerExtensions:encodings:rtcp:mid:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedCodec *> * _Nullable codecs __attribute__((swift_name("codecs")));
@property (readonly) NSArray<SharedEncodings *> * _Nullable encodings __attribute__((swift_name("encodings")));
@property (readonly) NSArray<SharedHeaderExtension *> * _Nullable headerExtensions __attribute__((swift_name("headerExtensions")));
@property (readonly) NSString * _Nullable mid __attribute__((swift_name("mid")));
@property (readonly) SharedRtcp * _Nullable rtcp __attribute__((swift_name("rtcp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConsumerRtpParameters.Companion")))
@interface SharedConsumerRtpParametersCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedConsumerRtpParametersCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Device")))
@interface SharedDevice : SharedBase
- (instancetype)initWithIsMobile:(SharedBoolean * _Nullable)isMobile browserName:(NSString * _Nullable)browserName osName:(NSString * _Nullable)osName browserVersion:(NSString * _Nullable)browserVersion osVersionName:(NSString * _Nullable)osVersionName engineName:(NSString * _Nullable)engineName __attribute__((swift_name("init(isMobile:browserName:osName:browserVersion:osVersionName:engineName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedDeviceCompanion *companion __attribute__((swift_name("companion")));
- (SharedBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedDevice *)doCopyIsMobile:(SharedBoolean * _Nullable)isMobile browserName:(NSString * _Nullable)browserName osName:(NSString * _Nullable)osName browserVersion:(NSString * _Nullable)browserVersion osVersionName:(NSString * _Nullable)osVersionName engineName:(NSString * _Nullable)engineName __attribute__((swift_name("doCopy(isMobile:browserName:osName:browserVersion:osVersionName:engineName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable browserName __attribute__((swift_name("browserName")));
@property NSString * _Nullable browserVersion __attribute__((swift_name("browserVersion")));
@property NSString * _Nullable engineName __attribute__((swift_name("engineName")));
@property SharedBoolean * _Nullable isMobile __attribute__((swift_name("isMobile")));
@property NSString * _Nullable osName __attribute__((swift_name("osName")));
@property NSString * _Nullable osVersionName __attribute__((swift_name("osVersionName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Device.Companion")))
@interface SharedDeviceCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDeviceCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Encodings")))
@interface SharedEncodings : SharedBase
- (instancetype)initWithSsrc:(SharedInt * _Nullable)ssrc rtx:(SharedRtx * _Nullable)rtx scalabilityMode:(NSString * _Nullable)scalabilityMode __attribute__((swift_name("init(ssrc:rtx:scalabilityMode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedEncodingsCompanion *companion __attribute__((swift_name("companion")));
- (SharedInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedRtx * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedEncodings *)doCopySsrc:(SharedInt * _Nullable)ssrc rtx:(SharedRtx * _Nullable)rtx scalabilityMode:(NSString * _Nullable)scalabilityMode __attribute__((swift_name("doCopy(ssrc:rtx:scalabilityMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedRtx * _Nullable rtx __attribute__((swift_name("rtx")));
@property (readonly) NSString * _Nullable scalabilityMode __attribute__((swift_name("scalabilityMode")));
@property (readonly) SharedInt * _Nullable ssrc __attribute__((swift_name("ssrc")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Encodings.Companion")))
@interface SharedEncodingsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEncodingsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingPeerFlags")))
@interface SharedMeetingPeerFlags : SharedBase
- (instancetype)initWithHiddenParticipant:(SharedBoolean * _Nullable)hiddenParticipant recordere:(SharedBoolean * _Nullable)recordere __attribute__((swift_name("init(hiddenParticipant:recordere:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedMeetingPeerFlagsCompanion *companion __attribute__((swift_name("companion")));
- (SharedBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedMeetingPeerFlags *)doCopyHiddenParticipant:(SharedBoolean * _Nullable)hiddenParticipant recordere:(SharedBoolean * _Nullable)recordere __attribute__((swift_name("doCopy(hiddenParticipant:recordere:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedBoolean * _Nullable hiddenParticipant __attribute__((swift_name("hiddenParticipant")));
@property SharedBoolean * _Nullable recordere __attribute__((swift_name("recordere")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingPeerFlags.Companion")))
@interface SharedMeetingPeerFlagsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMeetingPeerFlagsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingPeerMetadata")))
@interface SharedMeetingPeerMetadata : SharedBase
- (instancetype)initWithViewType:(NSString * _Nullable)viewType __attribute__((swift_name("init(viewType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedMeetingPeerMetadataCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedMeetingPeerMetadata *)doCopyViewType:(NSString * _Nullable)viewType __attribute__((swift_name("doCopy(viewType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable viewType __attribute__((swift_name("viewType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingPeerMetadata.Companion")))
@interface SharedMeetingPeerMetadataCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMeetingPeerMetadataCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rtcp")))
@interface SharedRtcp : SharedBase
- (instancetype)initWithCname:(NSString * _Nullable)cname reducedSize:(SharedBoolean * _Nullable)reducedSize mux:(SharedBoolean * _Nullable)mux __attribute__((swift_name("init(cname:reducedSize:mux:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedRtcpCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedRtcp *)doCopyCname:(NSString * _Nullable)cname reducedSize:(SharedBoolean * _Nullable)reducedSize mux:(SharedBoolean * _Nullable)mux __attribute__((swift_name("doCopy(cname:reducedSize:mux:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable cname __attribute__((swift_name("cname")));
@property (readonly) SharedBoolean * _Nullable mux __attribute__((swift_name("mux")));
@property (readonly) SharedBoolean * _Nullable reducedSize __attribute__((swift_name("reducedSize")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rtcp.Companion")))
@interface SharedRtcpCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedRtcpCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rtx")))
@interface SharedRtx : SharedBase
- (instancetype)initWithSsrc:(SharedInt * _Nullable)ssrc __attribute__((swift_name("init(ssrc:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedRtxCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedInt * _Nullable ssrc __attribute__((swift_name("ssrc")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rtx.Companion")))
@interface SharedRtxCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedRtxCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketActiveSpeakerModel")))
@interface SharedWebSocketActiveSpeakerModel : SharedBasePayloadModel
- (instancetype)initWithPeerId:(NSString *)peerId volume:(int32_t)volume __attribute__((swift_name("init(peerId:volume:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebSocketActiveSpeakerModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (SharedWebSocketActiveSpeakerModel *)doCopyPeerId:(NSString *)peerId volume:(int32_t)volume __attribute__((swift_name("doCopy(peerId:volume:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *peerId __attribute__((swift_name("peerId")));
@property (readonly) int32_t volume __attribute__((swift_name("volume")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketActiveSpeakerModel.Companion")))
@interface SharedWebSocketActiveSpeakerModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketActiveSpeakerModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketChatMessage")))
@interface SharedWebSocketChatMessage : SharedBasePayloadModel
- (instancetype)initWithMessage:(NSString * _Nullable)message userId:(NSString *)userId displayName:(NSString *)displayName type:(int32_t)type link:(NSString * _Nullable)link __attribute__((swift_name("init(message:userId:displayName:type:link:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebSocketChatMessageCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedWebSocketChatMessage *)doCopyMessage:(NSString * _Nullable)message userId:(NSString *)userId displayName:(NSString *)displayName type:(int32_t)type link:(NSString * _Nullable)link __attribute__((swift_name("doCopy(message:userId:displayName:type:link:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString * _Nullable link __attribute__((swift_name("link")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) int32_t type __attribute__((swift_name("type")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketChatMessage.Companion")))
@interface SharedWebSocketChatMessageCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketChatMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketChatMessagesModel")))
@interface SharedWebSocketChatMessagesModel : SharedBasePayloadModel
- (instancetype)initWithMessages:(NSArray<SharedWebSocketChatMessage *> * _Nullable)messages __attribute__((swift_name("init(messages:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebSocketChatMessagesModelCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<SharedWebSocketChatMessage *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedWebSocketChatMessagesModel *)doCopyMessages:(NSArray<SharedWebSocketChatMessage *> * _Nullable)messages __attribute__((swift_name("doCopy(messages:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedWebSocketChatMessage *> * _Nullable messages __attribute__((swift_name("messages")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketChatMessagesModel.Companion")))
@interface SharedWebSocketChatMessagesModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketChatMessagesModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketConnectTransportModel")))
@interface SharedWebSocketConnectTransportModel : SharedBasePayloadModel
- (instancetype)initWithId:(NSString * _Nullable)id producing:(SharedBoolean * _Nullable)producing __attribute__((swift_name("init(id:producing:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebSocketConnectTransportModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedWebSocketConnectTransportModel *)doCopyId:(NSString * _Nullable)id producing:(SharedBoolean * _Nullable)producing __attribute__((swift_name("doCopy(id:producing:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) SharedBoolean * _Nullable producing __attribute__((swift_name("producing")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketConnectTransportModel.Companion")))
@interface SharedWebSocketConnectTransportModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketConnectTransportModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketConsumerClosedModel")))
@interface SharedWebSocketConsumerClosedModel : SharedBasePayloadModel
- (instancetype)initWithId:(NSString * _Nullable)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebSocketConsumerClosedModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedWebSocketConsumerClosedModel *)doCopyId:(NSString * _Nullable)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketConsumerClosedModel.Companion")))
@interface SharedWebSocketConsumerClosedModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketConsumerClosedModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketConsumerModel")))
@interface SharedWebSocketConsumerModel : SharedBasePayloadModel
- (instancetype)initWithPeerId:(NSString * _Nullable)peerId producerId:(NSString * _Nullable)producerId id:(NSString * _Nullable)id kind:(NSString * _Nullable)kind rtpParameters:(SharedConsumerRtpParameters * _Nullable)rtpParameters type:(NSString * _Nullable)type appData:(SharedConsumerAppData * _Nullable)appData remotelyPaused:(SharedBoolean * _Nullable)remotelyPaused producerPaused:(SharedBoolean * _Nullable)producerPaused __attribute__((swift_name("init(peerId:producerId:id:kind:rtpParameters:type:appData:remotelyPaused:producerPaused:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebSocketConsumerModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedConsumerRtpParameters * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedConsumerAppData * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedBoolean * _Nullable)component8 __attribute__((swift_name("component8()")));
- (SharedBoolean * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedWebSocketConsumerModel *)doCopyPeerId:(NSString * _Nullable)peerId producerId:(NSString * _Nullable)producerId id:(NSString * _Nullable)id kind:(NSString * _Nullable)kind rtpParameters:(SharedConsumerRtpParameters * _Nullable)rtpParameters type:(NSString * _Nullable)type appData:(SharedConsumerAppData * _Nullable)appData remotelyPaused:(SharedBoolean * _Nullable)remotelyPaused producerPaused:(SharedBoolean * _Nullable)producerPaused __attribute__((swift_name("doCopy(peerId:producerId:id:kind:rtpParameters:type:appData:remotelyPaused:producerPaused:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedConsumerAppData * _Nullable appData __attribute__((swift_name("appData")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable kind __attribute__((swift_name("kind")));
@property NSString * _Nullable peerId __attribute__((swift_name("peerId")));
@property NSString * _Nullable producerId __attribute__((swift_name("producerId")));
@property (readonly) SharedBoolean * _Nullable producerPaused __attribute__((swift_name("producerPaused")));
@property (readonly) SharedBoolean * _Nullable remotelyPaused __attribute__((swift_name("remotelyPaused")));
@property SharedConsumerRtpParameters * _Nullable rtpParameters __attribute__((swift_name("rtpParameters")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketConsumerModel.Companion")))
@interface SharedWebSocketConsumerModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketConsumerModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketConsumerResumedModel")))
@interface SharedWebSocketConsumerResumedModel : SharedBasePayloadModel
- (instancetype)initWithId:(NSString * _Nullable)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebSocketConsumerResumedModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedWebSocketConsumerResumedModel *)doCopyId:(NSString * _Nullable)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketConsumerResumedModel.Companion")))
@interface SharedWebSocketConsumerResumedModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketConsumerResumedModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketEmptyModel")))
@interface SharedWebSocketEmptyModel : SharedBasePayloadModel
- (instancetype)initWithAny:(NSString * _Nullable)any __attribute__((swift_name("init(any:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebSocketEmptyModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedWebSocketEmptyModel *)doCopyAny:(NSString * _Nullable)any __attribute__((swift_name("doCopy(any:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable any __attribute__((swift_name("any")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketEmptyModel.Companion")))
@interface SharedWebSocketEmptyModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketEmptyModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketGetPageModel")))
@interface SharedWebSocketGetPageModel : SharedBasePayloadModel
- (instancetype)initWithPeerIds:(NSArray<NSString *> * _Nullable)peerIds __attribute__((swift_name("init(peerIds:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebSocketGetPageModelCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedWebSocketGetPageModel *)doCopyPeerIds:(NSArray<NSString *> * _Nullable)peerIds __attribute__((swift_name("doCopy(peerIds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<NSString *> * _Nullable peerIds __attribute__((swift_name("peerIds")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketGetPageModel.Companion")))
@interface SharedWebSocketGetPageModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketGetPageModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketMeetingPeerUser")))
@interface SharedWebSocketMeetingPeerUser : SharedBasePayloadModel
- (instancetype)initWithId:(NSString * _Nullable)id userId:(NSString * _Nullable)userId displayName:(NSString * _Nullable)displayName device:(SharedDevice * _Nullable)device picture:(NSString * _Nullable)picture isHost:(SharedBoolean * _Nullable)isHost webinarHiddenParticipant:(SharedBoolean * _Nullable)webinarHiddenParticipant flags:(SharedMeetingPeerFlags * _Nullable)flags metadata:(SharedMeetingPeerMetadata * _Nullable)metadata clientSpecificId:(NSString * _Nullable)clientSpecificId audioMuted:(SharedBoolean * _Nullable)audioMuted hiddenParticipant:(SharedBoolean * _Nullable)hiddenParticipant __attribute__((swift_name("init(id:userId:displayName:device:picture:isHost:webinarHiddenParticipant:flags:metadata:clientSpecificId:audioMuted:hiddenParticipant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebSocketMeetingPeerUserCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (SharedBoolean * _Nullable)component11 __attribute__((swift_name("component11()")));
- (SharedBoolean * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedDevice * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedBoolean * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedMeetingPeerFlags * _Nullable)component8 __attribute__((swift_name("component8()")));
- (SharedMeetingPeerMetadata * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedWebSocketMeetingPeerUser *)doCopyId:(NSString * _Nullable)id userId:(NSString * _Nullable)userId displayName:(NSString * _Nullable)displayName device:(SharedDevice * _Nullable)device picture:(NSString * _Nullable)picture isHost:(SharedBoolean * _Nullable)isHost webinarHiddenParticipant:(SharedBoolean * _Nullable)webinarHiddenParticipant flags:(SharedMeetingPeerFlags * _Nullable)flags metadata:(SharedMeetingPeerMetadata * _Nullable)metadata clientSpecificId:(NSString * _Nullable)clientSpecificId audioMuted:(SharedBoolean * _Nullable)audioMuted hiddenParticipant:(SharedBoolean * _Nullable)hiddenParticipant __attribute__((swift_name("doCopy(id:userId:displayName:device:picture:isHost:webinarHiddenParticipant:flags:metadata:clientSpecificId:audioMuted:hiddenParticipant:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedBoolean * _Nullable audioMuted __attribute__((swift_name("audioMuted")));
@property NSString * _Nullable clientSpecificId __attribute__((swift_name("clientSpecificId")));
@property SharedDevice * _Nullable device __attribute__((swift_name("device")));
@property NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@property SharedMeetingPeerFlags * _Nullable flags __attribute__((swift_name("flags")));
@property SharedBoolean * _Nullable hiddenParticipant __attribute__((swift_name("hiddenParticipant")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property SharedBoolean * _Nullable isHost __attribute__((swift_name("isHost")));
@property SharedMeetingPeerMetadata * _Nullable metadata __attribute__((swift_name("metadata")));
@property NSString * _Nullable picture __attribute__((swift_name("picture")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@property SharedBoolean * _Nullable webinarHiddenParticipant __attribute__((swift_name("webinarHiddenParticipant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketMeetingPeerUser.Companion")))
@interface SharedWebSocketMeetingPeerUserCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketMeetingPeerUserCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPeerLeftModel")))
@interface SharedWebSocketPeerLeftModel : SharedBasePayloadModel
- (instancetype)initWithPeerId:(NSString *)peerId __attribute__((swift_name("init(peerId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebSocketPeerLeftModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedWebSocketPeerLeftModel *)doCopyPeerId:(NSString *)peerId __attribute__((swift_name("doCopy(peerId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *peerId __attribute__((swift_name("peerId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPeerLeftModel.Companion")))
@interface SharedWebSocketPeerLeftModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketPeerLeftModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPeerMuteModel")))
@interface SharedWebSocketPeerMuteModel : SharedBasePayloadModel
- (instancetype)initWithPeerId:(NSString * _Nullable)peerId __attribute__((swift_name("init(peerId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebSocketPeerMuteModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedWebSocketPeerMuteModel *)doCopyPeerId:(NSString * _Nullable)peerId __attribute__((swift_name("doCopy(peerId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable peerId __attribute__((swift_name("peerId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPeerMuteModel.Companion")))
@interface SharedWebSocketPeerMuteModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketPeerMuteModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPeerPinnedModel")))
@interface SharedWebSocketPeerPinnedModel : SharedBasePayloadModel
- (instancetype)initWithPeerId:(NSString * _Nullable)peerId __attribute__((swift_name("init(peerId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebSocketPeerPinnedModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedWebSocketPeerPinnedModel *)doCopyPeerId:(NSString * _Nullable)peerId __attribute__((swift_name("doCopy(peerId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable peerId __attribute__((swift_name("peerId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPeerPinnedModel.Companion")))
@interface SharedWebSocketPeerPinnedModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketPeerPinnedModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPoll")))
@interface SharedWebSocketPoll : SharedBase
- (instancetype)initWithId:(NSString *)id options:(NSArray<SharedWebSocketPollOption *> *)options question:(NSString *)question anonymous:(BOOL)anonymous hideVotes:(BOOL)hideVotes createdBy:(NSString *)createdBy __attribute__((swift_name("init(id:options:question:anonymous:hideVotes:createdBy:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedWebSocketPollCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedWebSocketPollOption *> *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (SharedWebSocketPoll *)doCopyId:(NSString *)id options:(NSArray<SharedWebSocketPollOption *> *)options question:(NSString *)question anonymous:(BOOL)anonymous hideVotes:(BOOL)hideVotes createdBy:(NSString *)createdBy __attribute__((swift_name("doCopy(id:options:question:anonymous:hideVotes:createdBy:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL anonymous __attribute__((swift_name("anonymous")));
@property (readonly) NSString *createdBy __attribute__((swift_name("createdBy")));
@property (readonly) BOOL hideVotes __attribute__((swift_name("hideVotes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSArray<SharedWebSocketPollOption *> *options __attribute__((swift_name("options")));
@property (readonly) NSString *question __attribute__((swift_name("question")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPoll.Companion")))
@interface SharedWebSocketPollCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketPollCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPollModel")))
@interface SharedWebSocketPollModel : SharedBasePayloadModel
- (instancetype)initWithPoll:(SharedWebSocketPoll *)poll __attribute__((swift_name("init(poll:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebSocketPollModelCompanion *companion __attribute__((swift_name("companion")));
- (SharedWebSocketPoll *)component1 __attribute__((swift_name("component1()")));
- (SharedWebSocketPollModel *)doCopyPoll:(SharedWebSocketPoll *)poll __attribute__((swift_name("doCopy(poll:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedWebSocketPoll *poll __attribute__((swift_name("poll")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPollModel.Companion")))
@interface SharedWebSocketPollModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketPollModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPollOption")))
@interface SharedWebSocketPollOption : SharedBase
- (instancetype)initWithText:(NSString *)text votes:(NSArray<SharedWebSocketPollVote *> *)votes count:(int32_t)count __attribute__((swift_name("init(text:votes:count:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedWebSocketPollOptionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedWebSocketPollVote *> *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (SharedWebSocketPollOption *)doCopyText:(NSString *)text votes:(NSArray<SharedWebSocketPollVote *> *)votes count:(int32_t)count __attribute__((swift_name("doCopy(text:votes:count:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property (readonly) NSArray<SharedWebSocketPollVote *> *votes __attribute__((swift_name("votes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPollOption.Companion")))
@interface SharedWebSocketPollOptionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketPollOptionCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPollVote")))
@interface SharedWebSocketPollVote : SharedBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedWebSocketPollVoteCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedWebSocketPollVote *)doCopyId:(NSString *)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPollVote.Companion")))
@interface SharedWebSocketPollVoteCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketPollVoteCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPollsModel")))
@interface SharedWebSocketPollsModel : SharedBasePayloadModel
- (instancetype)initWithPolls:(NSDictionary<NSString *, SharedWebSocketPoll *> * _Nullable)polls __attribute__((swift_name("init(polls:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebSocketPollsModelCompanion *companion __attribute__((swift_name("companion")));
- (NSDictionary<NSString *, SharedWebSocketPoll *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedWebSocketPollsModel *)doCopyPolls:(NSDictionary<NSString *, SharedWebSocketPoll *> * _Nullable)polls __attribute__((swift_name("doCopy(polls:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, SharedWebSocketPoll *> * _Nullable polls __attribute__((swift_name("polls")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPollsModel.Companion")))
@interface SharedWebSocketPollsModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketPollsModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketProducerClosedModel")))
@interface SharedWebSocketProducerClosedModel : SharedBasePayloadModel
- (instancetype)initWithId:(NSString * _Nullable)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebSocketProducerClosedModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedWebSocketProducerClosedModel *)doCopyId:(NSString * _Nullable)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketProducerClosedModel.Companion")))
@interface SharedWebSocketProducerClosedModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketProducerClosedModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketProducerConnectModel")))
@interface SharedWebSocketProducerConnectModel : SharedBasePayloadModel
- (instancetype)initWithId:(NSString * _Nullable)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebSocketProducerConnectModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedWebSocketProducerConnectModel *)doCopyId:(NSString * _Nullable)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketProducerConnectModel.Companion")))
@interface SharedWebSocketProducerConnectModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketProducerConnectModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketSelectedPeersModel")))
@interface SharedWebSocketSelectedPeersModel : SharedBasePayloadModel
- (instancetype)initWithPeerIds:(NSArray<NSString *> * _Nullable)peerIds __attribute__((swift_name("init(peerIds:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebSocketSelectedPeersModelCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedWebSocketSelectedPeersModel *)doCopyPeerIds:(NSArray<NSString *> * _Nullable)peerIds __attribute__((swift_name("doCopy(peerIds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<NSString *> * _Nullable peerIds __attribute__((swift_name("peerIds")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketSelectedPeersModel.Companion")))
@interface SharedWebSocketSelectedPeersModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketSelectedPeersModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketWaitlistPeerAccepted")))
@interface SharedWebSocketWaitlistPeerAccepted : SharedBasePayloadModel
- (instancetype)initWithId:(NSString * _Nullable)id name:(NSString * _Nullable)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebSocketWaitlistPeerAcceptedCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedWebSocketWaitlistPeerAccepted *)doCopyId:(NSString * _Nullable)id name:(NSString * _Nullable)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketWaitlistPeerAccepted.Companion")))
@interface SharedWebSocketWaitlistPeerAcceptedCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketWaitlistPeerAcceptedCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketWaitlistPeerAdded")))
@interface SharedWebSocketWaitlistPeerAdded : SharedBasePayloadModel
- (instancetype)initWithId:(NSString *)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebSocketWaitlistPeerAddedCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedWebSocketWaitlistPeerAdded *)doCopyId:(NSString *)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketWaitlistPeerAdded.Companion")))
@interface SharedWebSocketWaitlistPeerAddedCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketWaitlistPeerAddedCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketWaitlistPeerClosed")))
@interface SharedWebSocketWaitlistPeerClosed : SharedBasePayloadModel
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebSocketWaitlistPeerClosedCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedWebSocketWaitlistPeerClosed *)doCopyId:(NSString *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketWaitlistPeerClosed.Companion")))
@interface SharedWebSocketWaitlistPeerClosedCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketWaitlistPeerClosedCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketWaitlistPeerRejected")))
@interface SharedWebSocketWaitlistPeerRejected : SharedBasePayloadModel
- (instancetype)initWithId:(NSString * _Nullable)id name:(NSString * _Nullable)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebSocketWaitlistPeerRejectedCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedWebSocketWaitlistPeerRejected *)doCopyId:(NSString * _Nullable)id name:(NSString * _Nullable)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketWaitlistPeerRejected.Companion")))
@interface SharedWebSocketWaitlistPeerRejectedCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketWaitlistPeerRejectedCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Codec")))
@interface SharedCodec : SharedBase
- (instancetype)initWithKind:(NSString * _Nullable)kind mimeType:(NSString * _Nullable)mimeType payloadType:(SharedInt * _Nullable)payloadType clockRate:(SharedInt * _Nullable)clockRate channels:(SharedInt * _Nullable)channels rtcpFeedback:(NSArray<SharedCodecRtcpFeedback *> * _Nullable)rtcpFeedback parameters:(SharedCodecParameters * _Nullable)parameters preferredPayloadType:(SharedInt * _Nullable)preferredPayloadType __attribute__((swift_name("init(kind:mimeType:payloadType:clockRate:channels:rtcpFeedback:parameters:preferredPayloadType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCodecCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedInt * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSArray<SharedCodecRtcpFeedback *> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedCodecParameters * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedInt * _Nullable)component8 __attribute__((swift_name("component8()")));
- (SharedCodec *)doCopyKind:(NSString * _Nullable)kind mimeType:(NSString * _Nullable)mimeType payloadType:(SharedInt * _Nullable)payloadType clockRate:(SharedInt * _Nullable)clockRate channels:(SharedInt * _Nullable)channels rtcpFeedback:(NSArray<SharedCodecRtcpFeedback *> * _Nullable)rtcpFeedback parameters:(SharedCodecParameters * _Nullable)parameters preferredPayloadType:(SharedInt * _Nullable)preferredPayloadType __attribute__((swift_name("doCopy(kind:mimeType:payloadType:clockRate:channels:rtcpFeedback:parameters:preferredPayloadType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedInt * _Nullable channels __attribute__((swift_name("channels")));
@property SharedInt * _Nullable clockRate __attribute__((swift_name("clockRate")));
@property NSString * _Nullable kind __attribute__((swift_name("kind")));
@property NSString * _Nullable mimeType __attribute__((swift_name("mimeType")));
@property SharedCodecParameters * _Nullable parameters __attribute__((swift_name("parameters")));
@property SharedInt * _Nullable payloadType __attribute__((swift_name("payloadType")));
@property SharedInt * _Nullable preferredPayloadType __attribute__((swift_name("preferredPayloadType")));
@property NSArray<SharedCodecRtcpFeedback *> * _Nullable rtcpFeedback __attribute__((swift_name("rtcpFeedback")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Codec.Companion")))
@interface SharedCodecCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCodecCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CodecParameters")))
@interface SharedCodecParameters : SharedBase
- (instancetype)initWithXGoogleStartBitrate:(SharedInt * _Nullable)xGoogleStartBitrate apt:(SharedInt * _Nullable)apt profileId:(SharedInt * _Nullable)profileId packetizationMode:(SharedInt * _Nullable)packetizationMode levelAsymmetryAllowed:(SharedInt * _Nullable)levelAsymmetryAllowed profileLevelId:(NSString * _Nullable)profileLevelId __attribute__((swift_name("init(xGoogleStartBitrate:apt:profileId:packetizationMode:levelAsymmetryAllowed:profileLevelId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCodecParametersCompanion *companion __attribute__((swift_name("companion")));
- (SharedInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedInt * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedCodecParameters *)doCopyXGoogleStartBitrate:(SharedInt * _Nullable)xGoogleStartBitrate apt:(SharedInt * _Nullable)apt profileId:(SharedInt * _Nullable)profileId packetizationMode:(SharedInt * _Nullable)packetizationMode levelAsymmetryAllowed:(SharedInt * _Nullable)levelAsymmetryAllowed profileLevelId:(NSString * _Nullable)profileLevelId __attribute__((swift_name("doCopy(xGoogleStartBitrate:apt:profileId:packetizationMode:levelAsymmetryAllowed:profileLevelId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedInt * _Nullable apt __attribute__((swift_name("apt")));
@property SharedInt * _Nullable levelAsymmetryAllowed __attribute__((swift_name("levelAsymmetryAllowed")));
@property SharedInt * _Nullable packetizationMode __attribute__((swift_name("packetizationMode")));
@property SharedInt * _Nullable profileId __attribute__((swift_name("profileId")));
@property NSString * _Nullable profileLevelId __attribute__((swift_name("profileLevelId")));
@property SharedInt * _Nullable xGoogleStartBitrate __attribute__((swift_name("xGoogleStartBitrate")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CodecParameters.Companion")))
@interface SharedCodecParametersCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCodecParametersCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CodecRtcpFeedback")))
@interface SharedCodecRtcpFeedback : SharedBase
- (instancetype)initWithType:(NSString * _Nullable)type parameter:(NSString * _Nullable)parameter __attribute__((swift_name("init(type:parameter:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCodecRtcpFeedbackCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedCodecRtcpFeedback *)doCopyType:(NSString * _Nullable)type parameter:(NSString * _Nullable)parameter __attribute__((swift_name("doCopy(type:parameter:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable parameter __attribute__((swift_name("parameter")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CodecRtcpFeedback.Companion")))
@interface SharedCodecRtcpFeedbackCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCodecRtcpFeedbackCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateWebRTCTransportPayloadRequestModel")))
@interface SharedCreateWebRTCTransportPayloadRequestModel : SharedBase
- (instancetype)initWithForceTcp:(BOOL)forceTcp producing:(BOOL)producing consuming:(BOOL)consuming __attribute__((swift_name("init(forceTcp:producing:consuming:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCreateWebRTCTransportPayloadRequestModelCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (SharedCreateWebRTCTransportPayloadRequestModel *)doCopyForceTcp:(BOOL)forceTcp producing:(BOOL)producing consuming:(BOOL)consuming __attribute__((swift_name("doCopy(forceTcp:producing:consuming:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL consuming __attribute__((swift_name("consuming")));
@property (readonly) BOOL forceTcp __attribute__((swift_name("forceTcp")));
@property (readonly) BOOL producing __attribute__((swift_name("producing")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateWebRTCTransportPayloadRequestModel.Companion")))
@interface SharedCreateWebRTCTransportPayloadRequestModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCreateWebRTCTransportPayloadRequestModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DtlsParameters")))
@interface SharedDtlsParameters : SharedBase
- (instancetype)initWithFingerprints:(NSArray<SharedFingerprint *> * _Nullable)fingerprints role:(NSString * _Nullable)role __attribute__((swift_name("init(fingerprints:role:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedDtlsParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<SharedFingerprint *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedDtlsParameters *)doCopyFingerprints:(NSArray<SharedFingerprint *> * _Nullable)fingerprints role:(NSString * _Nullable)role __attribute__((swift_name("doCopy(fingerprints:role:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<SharedFingerprint *> * _Nullable fingerprints __attribute__((swift_name("fingerprints")));
@property NSString * _Nullable role __attribute__((swift_name("role")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DtlsParameters.Companion")))
@interface SharedDtlsParametersCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDtlsParametersCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Fingerprint")))
@interface SharedFingerprint : SharedBase
- (instancetype)initWithAlgorithm:(NSString * _Nullable)algorithm value:(NSString * _Nullable)value __attribute__((swift_name("init(algorithm:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedFingerprintCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedFingerprint *)doCopyAlgorithm:(NSString * _Nullable)algorithm value:(NSString * _Nullable)value __attribute__((swift_name("doCopy(algorithm:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable algorithm __attribute__((swift_name("algorithm")));
@property NSString * _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Fingerprint.Companion")))
@interface SharedFingerprintCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFingerprintCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HeaderExtension")))
@interface SharedHeaderExtension : SharedBase
- (instancetype)initWithKind:(NSString * _Nullable)kind uri:(NSString * _Nullable)uri preferredId:(SharedInt * _Nullable)preferredId id:(SharedInt * _Nullable)id preferredEncrypt:(SharedBoolean * _Nullable)preferredEncrypt encrypt:(SharedBoolean * _Nullable)encrypt direction:(NSString * _Nullable)direction __attribute__((swift_name("init(kind:uri:preferredId:id:preferredEncrypt:encrypt:direction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedHeaderExtensionCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedBoolean * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedHeaderExtension *)doCopyKind:(NSString * _Nullable)kind uri:(NSString * _Nullable)uri preferredId:(SharedInt * _Nullable)preferredId id:(SharedInt * _Nullable)id preferredEncrypt:(SharedBoolean * _Nullable)preferredEncrypt encrypt:(SharedBoolean * _Nullable)encrypt direction:(NSString * _Nullable)direction __attribute__((swift_name("doCopy(kind:uri:preferredId:id:preferredEncrypt:encrypt:direction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable direction __attribute__((swift_name("direction")));
@property SharedBoolean * _Nullable encrypt __attribute__((swift_name("encrypt")));
@property SharedInt * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable kind __attribute__((swift_name("kind")));
@property SharedBoolean * _Nullable preferredEncrypt __attribute__((swift_name("preferredEncrypt")));
@property SharedInt * _Nullable preferredId __attribute__((swift_name("preferredId")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HeaderExtension.Companion")))
@interface SharedHeaderExtensionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedHeaderExtensionCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IceCandidate")))
@interface SharedIceCandidate : SharedBase
- (instancetype)initWithFoundation:(NSString * _Nullable)foundation ip:(NSString * _Nullable)ip port:(SharedInt * _Nullable)port priority:(SharedInt * _Nullable)priority protocol:(NSString * _Nullable)protocol type:(NSString * _Nullable)type tcpType:(NSString * _Nullable)tcpType __attribute__((swift_name("init(foundation:ip:port:priority:protocol:type:tcpType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedIceCandidateCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedIceCandidate *)doCopyFoundation:(NSString * _Nullable)foundation ip:(NSString * _Nullable)ip port:(SharedInt * _Nullable)port priority:(SharedInt * _Nullable)priority protocol:(NSString * _Nullable)protocol type:(NSString * _Nullable)type tcpType:(NSString * _Nullable)tcpType __attribute__((swift_name("doCopy(foundation:ip:port:priority:protocol:type:tcpType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable foundation __attribute__((swift_name("foundation")));
@property NSString * _Nullable ip __attribute__((swift_name("ip")));
@property SharedInt * _Nullable port __attribute__((swift_name("port")));
@property SharedInt * _Nullable priority __attribute__((swift_name("priority")));
@property NSString * _Nullable protocol __attribute__((swift_name("protocol")));
@property NSString * _Nullable tcpType __attribute__((swift_name("tcpType")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IceCandidate.Companion")))
@interface SharedIceCandidateCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedIceCandidateCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IceParameters")))
@interface SharedIceParameters : SharedBase
- (instancetype)initWithIceLite:(SharedBoolean * _Nullable)iceLite password:(NSString * _Nullable)password usernameFragment:(NSString * _Nullable)usernameFragment __attribute__((swift_name("init(iceLite:password:usernameFragment:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedIceParametersCompanion *companion __attribute__((swift_name("companion")));
- (SharedBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedIceParameters *)doCopyIceLite:(SharedBoolean * _Nullable)iceLite password:(NSString * _Nullable)password usernameFragment:(NSString * _Nullable)usernameFragment __attribute__((swift_name("doCopy(iceLite:password:usernameFragment:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedBoolean * _Nullable iceLite __attribute__((swift_name("iceLite")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSString * _Nullable usernameFragment __attribute__((swift_name("usernameFragment")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IceParameters.Companion")))
@interface SharedIceParametersCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedIceParametersCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JoinRoomPayloadRequestModel")))
@interface SharedJoinRoomPayloadRequestModel : SharedBase
- (instancetype)initWithDevice:(SharedDevice * _Nullable)device displayName:(NSString * _Nullable)displayName rtpCapabilities:(SharedRouterCapabilitiesModel * _Nullable)rtpCapabilities isLegacy:(BOOL)isLegacy audioMuted:(BOOL)audioMuted __attribute__((swift_name("init(device:displayName:rtpCapabilities:isLegacy:audioMuted:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedJoinRoomPayloadRequestModelCompanion *companion __attribute__((swift_name("companion")));
- (SharedDevice * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedRouterCapabilitiesModel * _Nullable)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (SharedJoinRoomPayloadRequestModel *)doCopyDevice:(SharedDevice * _Nullable)device displayName:(NSString * _Nullable)displayName rtpCapabilities:(SharedRouterCapabilitiesModel * _Nullable)rtpCapabilities isLegacy:(BOOL)isLegacy audioMuted:(BOOL)audioMuted __attribute__((swift_name("doCopy(device:displayName:rtpCapabilities:isLegacy:audioMuted:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL audioMuted __attribute__((swift_name("audioMuted")));
@property SharedDevice * _Nullable device __attribute__((swift_name("device")));
@property NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@property BOOL isLegacy __attribute__((swift_name("isLegacy")));
@property SharedRouterCapabilitiesModel * _Nullable rtpCapabilities __attribute__((swift_name("rtpCapabilities")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JoinRoomPayloadRequestModel.Companion")))
@interface SharedJoinRoomPayloadRequestModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedJoinRoomPayloadRequestModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomState")))
@interface SharedRoomState : SharedBase
- (instancetype)initWithDisplayTitle:(NSString * _Nullable)displayTitle peers:(NSArray<SharedWebSocketMeetingPeerUser *> * _Nullable)peers lockedMode:(SharedBoolean * _Nullable)lockedMode roomUUID:(NSString * _Nullable)roomUUID config:(SharedRoomStateConfig * _Nullable)config plugins:(NSArray<NSString *> * _Nullable)plugins roomName:(NSString * _Nullable)roomName __attribute__((swift_name("init(displayTitle:peers:lockedMode:roomUUID:config:plugins:roomName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedRoomStateCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedWebSocketMeetingPeerUser *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedRoomStateConfig * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSArray<NSString *> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedRoomState *)doCopyDisplayTitle:(NSString * _Nullable)displayTitle peers:(NSArray<SharedWebSocketMeetingPeerUser *> * _Nullable)peers lockedMode:(SharedBoolean * _Nullable)lockedMode roomUUID:(NSString * _Nullable)roomUUID config:(SharedRoomStateConfig * _Nullable)config plugins:(NSArray<NSString *> * _Nullable)plugins roomName:(NSString * _Nullable)roomName __attribute__((swift_name("doCopy(displayTitle:peers:lockedMode:roomUUID:config:plugins:roomName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedRoomStateConfig * _Nullable config __attribute__((swift_name("config")));
@property (readonly) NSString * _Nullable displayTitle __attribute__((swift_name("displayTitle")));
@property (readonly) SharedBoolean * _Nullable lockedMode __attribute__((swift_name("lockedMode")));
@property (readonly) NSArray<SharedWebSocketMeetingPeerUser *> * _Nullable peers __attribute__((swift_name("peers")));
@property (readonly) NSArray<NSString *> * _Nullable plugins __attribute__((swift_name("plugins")));
@property (readonly) NSString * _Nullable roomName __attribute__((swift_name("roomName")));
@property (readonly) NSString * _Nullable roomUUID __attribute__((swift_name("roomUUID")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomState.Companion")))
@interface SharedRoomStateCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedRoomStateCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomStateAccess")))
@interface SharedRoomStateAccess : SharedBase
- (instancetype)initWithMic:(NSString * _Nullable)mic webcam:(NSString * _Nullable)webcam screenShare:(NSString * _Nullable)screenShare plugins:(NSString * _Nullable)plugins __attribute__((swift_name("init(mic:webcam:screenShare:plugins:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedRoomStateAccessCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedRoomStateAccess *)doCopyMic:(NSString * _Nullable)mic webcam:(NSString * _Nullable)webcam screenShare:(NSString * _Nullable)screenShare plugins:(NSString * _Nullable)plugins __attribute__((swift_name("doCopy(mic:webcam:screenShare:plugins:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable mic __attribute__((swift_name("mic")));
@property (readonly) NSString * _Nullable plugins __attribute__((swift_name("plugins")));
@property (readonly) NSString * _Nullable screenShare __attribute__((swift_name("screenShare")));
@property (readonly) NSString * _Nullable webcam __attribute__((swift_name("webcam")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomStateAccess.Companion")))
@interface SharedRoomStateAccessCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedRoomStateAccessCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomStateConfig")))
@interface SharedRoomStateConfig : SharedBase
- (instancetype)initWithJoinRestrictions:(NSArray<NSString *> * _Nullable)joinRestrictions access:(SharedRoomStateAccess * _Nullable)access __attribute__((swift_name("init(joinRestrictions:access:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedRoomStateConfigCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedRoomStateAccess * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedRoomStateConfig *)doCopyJoinRestrictions:(NSArray<NSString *> * _Nullable)joinRestrictions access:(SharedRoomStateAccess * _Nullable)access __attribute__((swift_name("doCopy(joinRestrictions:access:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedRoomStateAccess * _Nullable access __attribute__((swift_name("access")));
@property (readonly) NSArray<NSString *> * _Nullable joinRestrictions __attribute__((swift_name("joinRestrictions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomStateConfig.Companion")))
@interface SharedRoomStateConfigCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedRoomStateConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouterCapabilitiesModel")))
@interface SharedRouterCapabilitiesModel : SharedBasePayloadModel
- (instancetype)initWithCodecs:(NSArray<SharedCodec *> * _Nullable)codecs headerExtensions:(NSArray<SharedHeaderExtension *> * _Nullable)headerExtensions __attribute__((swift_name("init(codecs:headerExtensions:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedRouterCapabilitiesModelCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<SharedCodec *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedHeaderExtension *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedRouterCapabilitiesModel *)doCopyCodecs:(NSArray<SharedCodec *> * _Nullable)codecs headerExtensions:(NSArray<SharedHeaderExtension *> * _Nullable)headerExtensions __attribute__((swift_name("doCopy(codecs:headerExtensions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedCodec *> * _Nullable codecs __attribute__((swift_name("codecs")));
@property (readonly) NSArray<SharedHeaderExtension *> * _Nullable headerExtensions __attribute__((swift_name("headerExtensions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouterCapabilitiesModel.Companion")))
@interface SharedRouterCapabilitiesModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedRouterCapabilitiesModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebRtcCreateTransportModel")))
@interface SharedWebRtcCreateTransportModel : SharedBasePayloadModel
- (instancetype)initWithId:(NSString * _Nullable)id iceParameters:(SharedIceParameters * _Nullable)iceParameters iceCandidates:(NSArray<SharedIceCandidate *> * _Nullable)iceCandidates dtlsParameters:(SharedDtlsParameters * _Nullable)dtlsParameters producing:(SharedBoolean * _Nullable)producing __attribute__((swift_name("init(id:iceParameters:iceCandidates:dtlsParameters:producing:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebRtcCreateTransportModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedIceParameters * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedIceCandidate *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedDtlsParameters * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedBoolean * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedWebRtcCreateTransportModel *)doCopyId:(NSString * _Nullable)id iceParameters:(SharedIceParameters * _Nullable)iceParameters iceCandidates:(NSArray<SharedIceCandidate *> * _Nullable)iceCandidates dtlsParameters:(SharedDtlsParameters * _Nullable)dtlsParameters producing:(SharedBoolean * _Nullable)producing __attribute__((swift_name("doCopy(id:iceParameters:iceCandidates:dtlsParameters:producing:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedDtlsParameters * _Nullable dtlsParameters __attribute__((swift_name("dtlsParameters")));
@property NSArray<SharedIceCandidate *> * _Nullable iceCandidates __attribute__((swift_name("iceCandidates")));
@property SharedIceParameters * _Nullable iceParameters __attribute__((swift_name("iceParameters")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property SharedBoolean * _Nullable producing __attribute__((swift_name("producing")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebRtcCreateTransportModel.Companion")))
@interface SharedWebRtcCreateTransportModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebRtcCreateTransportModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketJoinRoomModel")))
@interface SharedWebSocketJoinRoomModel : SharedBasePayloadModel
- (instancetype)initWithWaitlisted:(SharedBoolean * _Nullable)waitlisted peers:(NSArray<SharedWebSocketMeetingPeerUser *> * _Nullable)peers waitlistedPeers:(NSArray<SharedWebSocketMeetingPeerUser *> * _Nullable)waitlistedPeers startedAt:(NSString * _Nullable)startedAt isHost:(BOOL)isHost __attribute__((swift_name("init(waitlisted:peers:waitlistedPeers:startedAt:isHost:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebSocketJoinRoomModelCompanion *companion __attribute__((swift_name("companion")));
- (SharedBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedWebSocketMeetingPeerUser *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedWebSocketMeetingPeerUser *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (SharedWebSocketJoinRoomModel *)doCopyWaitlisted:(SharedBoolean * _Nullable)waitlisted peers:(NSArray<SharedWebSocketMeetingPeerUser *> * _Nullable)peers waitlistedPeers:(NSArray<SharedWebSocketMeetingPeerUser *> * _Nullable)waitlistedPeers startedAt:(NSString * _Nullable)startedAt isHost:(BOOL)isHost __attribute__((swift_name("doCopy(waitlisted:peers:waitlistedPeers:startedAt:isHost:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isHost __attribute__((swift_name("isHost")));
@property (readonly) NSArray<SharedWebSocketMeetingPeerUser *> * _Nullable peers __attribute__((swift_name("peers")));
@property (readonly) NSString * _Nullable startedAt __attribute__((swift_name("startedAt")));
@property (readonly) SharedBoolean * _Nullable waitlisted __attribute__((swift_name("waitlisted")));
@property (readonly) NSArray<SharedWebSocketMeetingPeerUser *> * _Nullable waitlistedPeers __attribute__((swift_name("waitlistedPeers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketJoinRoomModel.Companion")))
@interface SharedWebSocketJoinRoomModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketJoinRoomModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketRoomStateModel")))
@interface SharedWebSocketRoomStateModel : SharedBasePayloadModel
- (instancetype)initWithRoomState:(SharedRoomState * _Nullable)roomState __attribute__((swift_name("init(roomState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedWebSocketRoomStateModelCompanion *companion __attribute__((swift_name("companion")));
- (SharedRoomState * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedWebSocketRoomStateModel *)doCopyRoomState:(SharedRoomState * _Nullable)roomState __attribute__((swift_name("doCopy(roomState:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedRoomState * _Nullable roomState __attribute__((swift_name("roomState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketRoomStateModel.Companion")))
@interface SharedWebSocketRoomStateModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWebSocketRoomStateModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PeerConnectionUtils")))
@interface SharedPeerConnectionUtils : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)checkDevicePermissions __attribute__((swift_name("checkDevicePermissions()")));
- (RTCAudioTrack * _Nullable)createAudioTrackId:(NSString *)id __attribute__((swift_name("createAudioTrack(id:)")));
- (void)createPeerConnectionFactory __attribute__((swift_name("createPeerConnectionFactory()")));
- (RTCVideoTrack * _Nullable)createVideoTrackId:(NSString *)id __attribute__((swift_name("createVideoTrack(id:)")));
- (void)emptyIsGranted:(BOOL)isGranted __attribute__((swift_name("empty(isGranted:)")));
@end;

__attribute__((swift_name("VideoRenderer")))
@protocol SharedVideoRenderer
@required
- (void)renderTrack:(RTCMediaStreamTrack *)track __attribute__((swift_name("render(track:)")));
@end;

__attribute__((swift_name("IApiClient")))
@protocol SharedIApiClient
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getActiveRecordingWithCompletionHandler:(void (^)(SharedRecordingResponseWrapper * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getActiveRecording(completionHandler:)")));
- (SharedKtor_client_coreHttpClient *)getClient __attribute__((swift_name("getClient()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getICEServersWithCompletionHandler:(void (^)(SharedIceServersWrapper * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getICEServers(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRoomNodeDataWithCompletionHandler:(void (^)(SharedMeetingSessionDataWrapper * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRoomNodeData(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserDetailsWithCompletionHandler:(void (^)(SharedUserDataWrapper * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserDetails(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserPresetWithCompletionHandler:(void (^)(SharedUserPresetDataWrapper * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserPreset(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)startRecordingWithCompletionHandler:(void (^)(SharedRecordingResponseWrapper * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("startRecording(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)stopRecordingRecordingData:(SharedRecordingData *)recordingData completionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("stopRecording(recordingData:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Auth")))
@interface SharedAuth : SharedBase
- (instancetype)initWithUserAdded:(BOOL)userAdded authToken:(NSString *)authToken id:(NSString *)id __attribute__((swift_name("init(userAdded:authToken:id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedAuthCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (SharedAuth *)doCopyUserAdded:(BOOL)userAdded authToken:(NSString *)authToken id:(NSString *)id __attribute__((swift_name("doCopy(userAdded:authToken:id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *authToken __attribute__((swift_name("authToken")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL userAdded __attribute__((swift_name("userAdded")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Auth.Companion")))
@interface SharedAuthCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedAuthCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthResponse")))
@interface SharedAuthResponse : SharedBase
- (instancetype)initWithAuthResponse:(SharedAuth *)authResponse __attribute__((swift_name("init(authResponse:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedAuthResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedAuth *)component1 __attribute__((swift_name("component1()")));
- (SharedAuthResponse *)doCopyAuthResponse:(SharedAuth *)authResponse __attribute__((swift_name("doCopy(authResponse:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedAuth *authResponse __attribute__((swift_name("authResponse")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthResponse.Companion")))
@interface SharedAuthResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedAuthResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Authorization")))
@interface SharedAuthorization : SharedBase
- (instancetype)initWithWaitingRoom:(BOOL)waitingRoom __attribute__((swift_name("init(waitingRoom:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedAuthorizationCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (SharedAuthorization *)doCopyWaitingRoom:(BOOL)waitingRoom __attribute__((swift_name("doCopy(waitingRoom:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL waitingRoom __attribute__((swift_name("waitingRoom")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Authorization.Companion")))
@interface SharedAuthorizationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedAuthorizationCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatPrivatePermissions")))
@interface SharedChatPrivatePermissions : SharedBase
- (instancetype)initWithCanSend:(SharedBoolean * _Nullable)canSend canReceive:(SharedBoolean * _Nullable)canReceive text:(SharedBoolean * _Nullable)text files:(SharedBoolean * _Nullable)files __attribute__((swift_name("init(canSend:canReceive:text:files:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedChatPrivatePermissionsCompanion *companion __attribute__((swift_name("companion")));
- (SharedBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedBoolean * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedChatPrivatePermissions *)doCopyCanSend:(SharedBoolean * _Nullable)canSend canReceive:(SharedBoolean * _Nullable)canReceive text:(SharedBoolean * _Nullable)text files:(SharedBoolean * _Nullable)files __attribute__((swift_name("doCopy(canSend:canReceive:text:files:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedBoolean * _Nullable canReceive __attribute__((swift_name("canReceive")));
@property (readonly) SharedBoolean * _Nullable canSend __attribute__((swift_name("canSend")));
@property (readonly) SharedBoolean * _Nullable files __attribute__((swift_name("files")));
@property (readonly) SharedBoolean * _Nullable text __attribute__((swift_name("text")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatPrivatePermissions.Companion")))
@interface SharedChatPrivatePermissionsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedChatPrivatePermissionsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatPublicPermissions")))
@interface SharedChatPublicPermissions : SharedBase
- (instancetype)initWithCanSend:(SharedBoolean * _Nullable)canSend text:(SharedBoolean * _Nullable)text files:(SharedBoolean * _Nullable)files __attribute__((swift_name("init(canSend:text:files:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedChatPublicPermissionsCompanion *companion __attribute__((swift_name("companion")));
- (SharedBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedChatPublicPermissions *)doCopyCanSend:(SharedBoolean * _Nullable)canSend text:(SharedBoolean * _Nullable)text files:(SharedBoolean * _Nullable)files __attribute__((swift_name("doCopy(canSend:text:files:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedBoolean * _Nullable canSend __attribute__((swift_name("canSend")));
@property (readonly) SharedBoolean * _Nullable files __attribute__((swift_name("files")));
@property (readonly) SharedBoolean * _Nullable text __attribute__((swift_name("text")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatPublicPermissions.Companion")))
@interface SharedChatPublicPermissionsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedChatPublicPermissionsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateMeetingRequest")))
@interface SharedCreateMeetingRequest : SharedBase
- (instancetype)initWithTitle:(NSString * _Nullable)title presetName:(NSString *)presetName authorization:(SharedAuthorization *)authorization __attribute__((swift_name("init(title:presetName:authorization:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCreateMeetingRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedAuthorization *)component3 __attribute__((swift_name("component3()")));
- (SharedCreateMeetingRequest *)doCopyTitle:(NSString * _Nullable)title presetName:(NSString *)presetName authorization:(SharedAuthorization *)authorization __attribute__((swift_name("doCopy(title:presetName:authorization:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedAuthorization *authorization __attribute__((swift_name("authorization")));
@property (readonly) NSString *presetName __attribute__((swift_name("presetName")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateMeetingRequest.Companion")))
@interface SharedCreateMeetingRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCreateMeetingRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateMeetingResponse")))
@interface SharedCreateMeetingResponse : SharedBase
- (instancetype)initWithMeeting:(SharedMeetingResponse *)meeting __attribute__((swift_name("init(meeting:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCreateMeetingResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedMeetingResponse *)component1 __attribute__((swift_name("component1()")));
- (SharedCreateMeetingResponse *)doCopyMeeting:(SharedMeetingResponse *)meeting __attribute__((swift_name("doCopy(meeting:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedMeetingResponse *meeting __attribute__((swift_name("meeting")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateMeetingResponse.Companion")))
@interface SharedCreateMeetingResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCreateMeetingResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateMeetingResponseWrapper")))
@interface SharedCreateMeetingResponseWrapper : SharedBase
- (instancetype)initWithData:(SharedCreateMeetingResponse *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCreateMeetingResponseWrapperCompanion *companion __attribute__((swift_name("companion")));
- (SharedCreateMeetingResponse *)component1 __attribute__((swift_name("component1()")));
- (SharedCreateMeetingResponseWrapper *)doCopyData:(SharedCreateMeetingResponse *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedCreateMeetingResponse *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateMeetingResponseWrapper.Companion")))
@interface SharedCreateMeetingResponseWrapperCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCreateMeetingResponseWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateParticipantRequest")))
@interface SharedCreateParticipantRequest : SharedBase
- (instancetype)initWithClientSpecificId:(NSString *)clientSpecificId displayName:(NSString * _Nullable)displayName presetName:(NSString * _Nullable)presetName roomName:(NSString *)roomName meetingId:(NSString * _Nullable)meetingId isHost:(BOOL)isHost __attribute__((swift_name("init(clientSpecificId:displayName:presetName:roomName:meetingId:isHost:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCreateParticipantRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (BOOL)component6 __attribute__((swift_name("component6()")));
- (SharedCreateParticipantRequest *)doCopyClientSpecificId:(NSString *)clientSpecificId displayName:(NSString * _Nullable)displayName presetName:(NSString * _Nullable)presetName roomName:(NSString *)roomName meetingId:(NSString * _Nullable)meetingId isHost:(BOOL)isHost __attribute__((swift_name("doCopy(clientSpecificId:displayName:presetName:roomName:meetingId:isHost:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *clientSpecificId __attribute__((swift_name("clientSpecificId")));
@property (readonly) NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@property (readonly) BOOL isHost __attribute__((swift_name("isHost")));
@property (readonly) NSString * _Nullable meetingId __attribute__((swift_name("meetingId")));
@property (readonly) NSString * _Nullable presetName __attribute__((swift_name("presetName")));
@property (readonly) NSString *roomName __attribute__((swift_name("roomName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateParticipantRequest.Companion")))
@interface SharedCreateParticipantRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCreateParticipantRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateParticipantResponseWrapper")))
@interface SharedCreateParticipantResponseWrapper : SharedBase
- (instancetype)initWithData:(SharedAuthResponse *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCreateParticipantResponseWrapperCompanion *companion __attribute__((swift_name("companion")));
- (SharedAuthResponse *)component1 __attribute__((swift_name("component1()")));
- (SharedCreateParticipantResponseWrapper *)doCopyData:(SharedAuthResponse *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedAuthResponse *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateParticipantResponseWrapper.Companion")))
@interface SharedCreateParticipantResponseWrapperCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCreateParticipantResponseWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeaturesData")))
@interface SharedFeaturesData : SharedBase
- (instancetype)initWithLogrocket:(SharedFeaturesOrganizationModelWrapper * _Nullable)logrocket newCallstatsOrganization:(NSArray<SharedFeaturesOrganizationModelWrapper *> * _Nullable)newCallstatsOrganization __attribute__((swift_name("init(logrocket:newCallstatsOrganization:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedFeaturesDataCompanion *companion __attribute__((swift_name("companion")));
- (SharedFeaturesOrganizationModelWrapper * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedFeaturesOrganizationModelWrapper *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedFeaturesData *)doCopyLogrocket:(SharedFeaturesOrganizationModelWrapper * _Nullable)logrocket newCallstatsOrganization:(NSArray<SharedFeaturesOrganizationModelWrapper *> * _Nullable)newCallstatsOrganization __attribute__((swift_name("doCopy(logrocket:newCallstatsOrganization:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedFeaturesOrganizationModelWrapper * _Nullable logrocket __attribute__((swift_name("logrocket")));
@property (readonly, getter=doNewCallstatsOrganization) NSArray<SharedFeaturesOrganizationModelWrapper *> * _Nullable newCallstatsOrganization __attribute__((swift_name("newCallstatsOrganization")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeaturesData.Companion")))
@interface SharedFeaturesDataCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFeaturesDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeaturesOrganizationModel")))
@interface SharedFeaturesOrganizationModel : SharedBase
- (instancetype)initWithOrganization:(NSArray<NSString *> * _Nullable)organization __attribute__((swift_name("init(organization:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedFeaturesOrganizationModelCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedFeaturesOrganizationModel *)doCopyOrganization:(NSArray<NSString *> * _Nullable)organization __attribute__((swift_name("doCopy(organization:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable organization __attribute__((swift_name("organization")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeaturesOrganizationModel.Companion")))
@interface SharedFeaturesOrganizationModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFeaturesOrganizationModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeaturesOrganizationModelWrapper")))
@interface SharedFeaturesOrganizationModelWrapper : SharedBase
- (instancetype)initWithWrapper:(SharedFeaturesOrganizationModel * _Nullable)wrapper config:(NSString * _Nullable)config __attribute__((swift_name("init(wrapper:config:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedFeaturesOrganizationModelWrapperCompanion *companion __attribute__((swift_name("companion")));
- (SharedFeaturesOrganizationModel * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedFeaturesOrganizationModelWrapper *)doCopyWrapper:(SharedFeaturesOrganizationModel * _Nullable)wrapper config:(NSString * _Nullable)config __attribute__((swift_name("doCopy(wrapper:config:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable config __attribute__((swift_name("config")));
@property (readonly) SharedFeaturesOrganizationModel * _Nullable wrapper __attribute__((swift_name("wrapper")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeaturesOrganizationModelWrapper.Companion")))
@interface SharedFeaturesOrganizationModelWrapperCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFeaturesOrganizationModelWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQlRequest")))
@interface SharedGraphQlRequest : SharedBase
- (instancetype)initWithQuery:(NSString *)query variables:(SharedGraphQlRequestVariables *)variables __attribute__((swift_name("init(query:variables:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedGraphQlRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedGraphQlRequestVariables *)component2 __attribute__((swift_name("component2()")));
- (SharedGraphQlRequest *)doCopyQuery:(NSString *)query variables:(SharedGraphQlRequestVariables *)variables __attribute__((swift_name("doCopy(query:variables:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *query __attribute__((swift_name("query")));
@property (readonly) SharedGraphQlRequestVariables *variables __attribute__((swift_name("variables")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQlRequest.Companion")))
@interface SharedGraphQlRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGraphQlRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQlRequestVariables")))
@interface SharedGraphQlRequestVariables : SharedBase
- (instancetype)initWithRoomName:(NSString *)roomName password:(NSString *)password __attribute__((swift_name("init(roomName:password:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedGraphQlRequestVariablesCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedGraphQlRequestVariables *)doCopyRoomName:(NSString *)roomName password:(NSString *)password __attribute__((swift_name("doCopy(roomName:password:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@property (readonly) NSString *roomName __attribute__((swift_name("roomName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQlRequestVariables.Companion")))
@interface SharedGraphQlRequestVariablesCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGraphQlRequestVariablesCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IceServerData")))
@interface SharedIceServerData : SharedBase
- (instancetype)initWithUrl:(NSString *)url username:(NSString * _Nullable)username credential:(NSString * _Nullable)credential credentialType:(NSString * _Nullable)credentialType __attribute__((swift_name("init(url:username:credential:credentialType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedIceServerDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedIceServerData *)doCopyUrl:(NSString *)url username:(NSString * _Nullable)username credential:(NSString * _Nullable)credential credentialType:(NSString * _Nullable)credentialType __attribute__((swift_name("doCopy(url:username:credential:credentialType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable credential __attribute__((swift_name("credential")));
@property (readonly) NSString * _Nullable credentialType __attribute__((swift_name("credentialType")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@property (readonly) NSString * _Nullable username __attribute__((swift_name("username")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IceServerData.Companion")))
@interface SharedIceServerDataCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedIceServerDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IceServersWrapper")))
@interface SharedIceServersWrapper : SharedBase
- (instancetype)initWithIceServers:(NSArray<SharedIceServerData *> *)iceServers __attribute__((swift_name("init(iceServers:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedIceServersWrapperCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<SharedIceServerData *> *)component1 __attribute__((swift_name("component1()")));
- (SharedIceServersWrapper *)doCopyIceServers:(NSArray<SharedIceServerData *> *)iceServers __attribute__((swift_name("doCopy(iceServers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedIceServerData *> *iceServers __attribute__((swift_name("iceServers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IceServersWrapper.Companion")))
@interface SharedIceServersWrapperCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedIceServersWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingResponse")))
@interface SharedMeetingResponse : SharedBase
- (instancetype)initWithId:(NSString *)id title:(NSString *)title roomName:(NSString *)roomName status:(NSString *)status createdAt:(NSString *)createdAt __attribute__((swift_name("init(id:title:roomName:status:createdAt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedMeetingResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (SharedMeetingResponse *)doCopyId:(NSString *)id title:(NSString *)title roomName:(NSString *)roomName status:(NSString *)status createdAt:(NSString *)createdAt __attribute__((swift_name("doCopy(id:title:roomName:status:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *roomName __attribute__((swift_name("roomName")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingResponse.Companion")))
@interface SharedMeetingResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMeetingResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingSessionData")))
@interface SharedMeetingSessionData : SharedBase
- (instancetype)initWithTitle:(NSString * _Nullable)title roomNodeLink:(NSString * _Nullable)roomNodeLink roomName:(NSString * _Nullable)roomName password:(NSString * _Nullable)password __attribute__((swift_name("init(title:roomNodeLink:roomName:password:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedMeetingSessionDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedMeetingSessionData *)doCopyTitle:(NSString * _Nullable)title roomNodeLink:(NSString * _Nullable)roomNodeLink roomName:(NSString * _Nullable)roomName password:(NSString * _Nullable)password __attribute__((swift_name("doCopy(title:roomNodeLink:roomName:password:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSString * _Nullable roomName __attribute__((swift_name("roomName")));
@property (readonly) NSString * _Nullable roomNodeLink __attribute__((swift_name("roomNodeLink")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingSessionData.Companion")))
@interface SharedMeetingSessionDataCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMeetingSessionDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingSessionDataWrapper")))
@interface SharedMeetingSessionDataWrapper : SharedBase
- (instancetype)initWithData:(SharedMeetingSessionWrapper *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedMeetingSessionDataWrapperCompanion *companion __attribute__((swift_name("companion")));
- (SharedMeetingSessionWrapper *)component1 __attribute__((swift_name("component1()")));
- (SharedMeetingSessionDataWrapper *)doCopyData:(SharedMeetingSessionWrapper *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedMeetingSessionWrapper *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingSessionDataWrapper.Companion")))
@interface SharedMeetingSessionDataWrapperCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMeetingSessionDataWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingSessionWrapper")))
@interface SharedMeetingSessionWrapper : SharedBase
- (instancetype)initWithSession:(SharedMeetingSessionData *)session __attribute__((swift_name("init(session:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedMeetingSessionWrapperCompanion *companion __attribute__((swift_name("companion")));
- (SharedMeetingSessionData *)component1 __attribute__((swift_name("component1()")));
- (SharedMeetingSessionWrapper *)doCopySession:(SharedMeetingSessionData *)session __attribute__((swift_name("doCopy(session:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedMeetingSessionData *session __attribute__((swift_name("session")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingSessionWrapper.Companion")))
@interface SharedMeetingSessionWrapperCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMeetingSessionWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresignedUrlData")))
@interface SharedPresignedUrlData : SharedBase
- (instancetype)initWithPutLocation:(NSString *)putLocation getLocation:(NSString *)getLocation __attribute__((swift_name("init(putLocation:getLocation:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedPresignedUrlDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedPresignedUrlData *)doCopyPutLocation:(NSString *)putLocation getLocation:(NSString *)getLocation __attribute__((swift_name("doCopy(putLocation:getLocation:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *getLocation __attribute__((swift_name("getLocation")));
@property (readonly) NSString *putLocation __attribute__((swift_name("putLocation")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresignedUrlData.Companion")))
@interface SharedPresignedUrlDataCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedPresignedUrlDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresignedUrlRequest")))
@interface SharedPresignedUrlRequest : SharedBase
- (instancetype)initWithRoomName:(NSString *)roomName filename:(NSString * _Nullable)filename __attribute__((swift_name("init(roomName:filename:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedPresignedUrlRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedPresignedUrlRequest *)doCopyRoomName:(NSString *)roomName filename:(NSString * _Nullable)filename __attribute__((swift_name("doCopy(roomName:filename:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable filename __attribute__((swift_name("filename")));
@property (readonly) NSString *roomName __attribute__((swift_name("roomName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresignedUrlRequest.Companion")))
@interface SharedPresignedUrlRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedPresignedUrlRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresignedUrlResponse")))
@interface SharedPresignedUrlResponse : SharedBase
- (instancetype)initWithData:(SharedPresignedUrlData *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedPresignedUrlResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedPresignedUrlData *)component1 __attribute__((swift_name("component1()")));
- (SharedPresignedUrlResponse *)doCopyData:(SharedPresignedUrlData *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedPresignedUrlData *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresignedUrlResponse.Companion")))
@interface SharedPresignedUrlResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedPresignedUrlResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordingData")))
@interface SharedRecordingData : SharedBase
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedRecordingDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedRecordingData *)doCopyId:(NSString *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordingData.Companion")))
@interface SharedRecordingDataCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedRecordingDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordingDataWrapper")))
@interface SharedRecordingDataWrapper : SharedBase
- (instancetype)initWithRecording:(SharedRecordingData *)recording __attribute__((swift_name("init(recording:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedRecordingDataWrapperCompanion *companion __attribute__((swift_name("companion")));
- (SharedRecordingData *)component1 __attribute__((swift_name("component1()")));
- (SharedRecordingDataWrapper *)doCopyRecording:(SharedRecordingData *)recording __attribute__((swift_name("doCopy(recording:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedRecordingData *recording __attribute__((swift_name("recording")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordingDataWrapper.Companion")))
@interface SharedRecordingDataWrapperCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedRecordingDataWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordingResponseWrapper")))
@interface SharedRecordingResponseWrapper : SharedBase
- (instancetype)initWithData:(SharedRecordingDataWrapper *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedRecordingResponseWrapperCompanion *companion __attribute__((swift_name("companion")));
- (SharedRecordingDataWrapper *)component1 __attribute__((swift_name("component1()")));
- (SharedRecordingResponseWrapper *)doCopyData:(SharedRecordingDataWrapper *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedRecordingDataWrapper *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordingResponseWrapper.Companion")))
@interface SharedRecordingResponseWrapperCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedRecordingResponseWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopRecordingModel")))
@interface SharedStopRecordingModel : SharedBase
- (instancetype)initWithRecordingAction:(NSString *)recordingAction __attribute__((swift_name("init(recordingAction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedStopRecordingModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedStopRecordingModel *)doCopyRecordingAction:(NSString *)recordingAction __attribute__((swift_name("doCopy(recordingAction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *recordingAction __attribute__((swift_name("recordingAction")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopRecordingModel.Companion")))
@interface SharedStopRecordingModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedStopRecordingModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserData")))
@interface SharedUserData : SharedBase
- (instancetype)initWithId:(NSString * _Nullable)id name:(NSString * _Nullable)name email:(NSString * _Nullable)email picture:(NSString * _Nullable)picture loggedIn:(SharedBoolean * _Nullable)loggedIn clientSpecificId:(NSString * _Nullable)clientSpecificId organizationId:(NSString * _Nullable)organizationId __attribute__((swift_name("init(id:name:email:picture:loggedIn:clientSpecificId:organizationId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedBoolean * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedUserData *)doCopyId:(NSString * _Nullable)id name:(NSString * _Nullable)name email:(NSString * _Nullable)email picture:(NSString * _Nullable)picture loggedIn:(SharedBoolean * _Nullable)loggedIn clientSpecificId:(NSString * _Nullable)clientSpecificId organizationId:(NSString * _Nullable)organizationId __attribute__((swift_name("doCopy(id:name:email:picture:loggedIn:clientSpecificId:organizationId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable clientSpecificId __attribute__((swift_name("clientSpecificId")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) SharedBoolean * _Nullable loggedIn __attribute__((swift_name("loggedIn")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable organizationId __attribute__((swift_name("organizationId")));
@property (readonly) NSString * _Nullable picture __attribute__((swift_name("picture")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserData.Companion")))
@interface SharedUserDataCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDataWrapper")))
@interface SharedUserDataWrapper : SharedBase
- (instancetype)initWithUser:(SharedUserData *)user __attribute__((swift_name("init(user:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserDataWrapperCompanion *companion __attribute__((swift_name("companion")));
- (SharedUserData *)component1 __attribute__((swift_name("component1()")));
- (SharedUserDataWrapper *)doCopyUser:(SharedUserData *)user __attribute__((swift_name("doCopy(user:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedUserData *user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDataWrapper.Companion")))
@interface SharedUserDataWrapperCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserDataWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetAloneHereTheme")))
@interface SharedUserPresetAloneHereTheme : SharedBase
- (instancetype)initWithIsEnabled:(SharedBoolean * _Nullable)isEnabled __attribute__((swift_name("init(isEnabled:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserPresetAloneHereThemeCompanion *companion __attribute__((swift_name("companion")));
- (SharedBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedUserPresetAloneHereTheme *)doCopyIsEnabled:(SharedBoolean * _Nullable)isEnabled __attribute__((swift_name("doCopy(isEnabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedBoolean * _Nullable isEnabled __attribute__((swift_name("isEnabled")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetAloneHereTheme.Companion")))
@interface SharedUserPresetAloneHereThemeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserPresetAloneHereThemeCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetChatPermissionProps")))
@interface SharedUserPresetChatPermissionProps : SharedBase
- (instancetype)initWithChatPublicProps:(SharedChatPublicPermissions * _Nullable)chatPublicProps chatPrivateProps:(SharedChatPrivatePermissions * _Nullable)chatPrivateProps __attribute__((swift_name("init(chatPublicProps:chatPrivateProps:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserPresetChatPermissionPropsCompanion *companion __attribute__((swift_name("companion")));
- (SharedChatPublicPermissions * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedChatPrivatePermissions * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedUserPresetChatPermissionProps *)doCopyChatPublicProps:(SharedChatPublicPermissions * _Nullable)chatPublicProps chatPrivateProps:(SharedChatPrivatePermissions * _Nullable)chatPrivateProps __attribute__((swift_name("doCopy(chatPublicProps:chatPrivateProps:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedChatPrivatePermissions * _Nullable chatPrivateProps __attribute__((swift_name("chatPrivateProps")));
@property (readonly) SharedChatPublicPermissions * _Nullable chatPublicProps __attribute__((swift_name("chatPublicProps")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetChatPermissionProps.Companion")))
@interface SharedUserPresetChatPermissionPropsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserPresetChatPermissionPropsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetColorsTheme")))
@interface SharedUserPresetColorsTheme : SharedBase
- (instancetype)initWithPrimary:(NSString * _Nullable)primary secondary:(NSString * _Nullable)secondary text:(NSString * _Nullable)text background:(NSString * _Nullable)background textPrimary:(NSString * _Nullable)textPrimary videoBackground:(NSString * _Nullable)videoBackground __attribute__((swift_name("init(primary:secondary:text:background:textPrimary:videoBackground:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserPresetColorsThemeCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedUserPresetColorsTheme *)doCopyPrimary:(NSString * _Nullable)primary secondary:(NSString * _Nullable)secondary text:(NSString * _Nullable)text background:(NSString * _Nullable)background textPrimary:(NSString * _Nullable)textPrimary videoBackground:(NSString * _Nullable)videoBackground __attribute__((swift_name("doCopy(primary:secondary:text:background:textPrimary:videoBackground:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable background __attribute__((swift_name("background")));
@property NSString * _Nullable primary __attribute__((swift_name("primary")));
@property NSString * _Nullable secondary __attribute__((swift_name("secondary")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property NSString * _Nullable textPrimary __attribute__((swift_name("textPrimary")));
@property NSString * _Nullable videoBackground __attribute__((swift_name("videoBackground")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetColorsTheme.Companion")))
@interface SharedUserPresetColorsThemeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserPresetColorsThemeCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetControlBarTheme")))
@interface SharedUserPresetControlBarTheme : SharedBase
- (instancetype)initWithIsEnabled:(SharedBoolean * _Nullable)isEnabled elements:(SharedUserPresetControlBarThemeElements * _Nullable)elements __attribute__((swift_name("init(isEnabled:elements:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserPresetControlBarThemeCompanion *companion __attribute__((swift_name("companion")));
- (SharedBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedUserPresetControlBarThemeElements * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedUserPresetControlBarTheme *)doCopyIsEnabled:(SharedBoolean * _Nullable)isEnabled elements:(SharedUserPresetControlBarThemeElements * _Nullable)elements __attribute__((swift_name("doCopy(isEnabled:elements:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedUserPresetControlBarThemeElements * _Nullable elements __attribute__((swift_name("elements")));
@property SharedBoolean * _Nullable isEnabled __attribute__((swift_name("isEnabled")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetControlBarTheme.Companion")))
@interface SharedUserPresetControlBarThemeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserPresetControlBarThemeCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetControlBarThemeElements")))
@interface SharedUserPresetControlBarThemeElements : SharedBase
- (instancetype)initWithPlugins:(SharedBoolean * _Nullable)plugins screenshare:(SharedBoolean * _Nullable)screenshare invite:(SharedBoolean * _Nullable)invite participants:(SharedBoolean * _Nullable)participants chat:(SharedBoolean * _Nullable)chat reactions:(SharedBoolean * _Nullable)reactions polls:(SharedBoolean * _Nullable)polls fullscreen:(SharedBoolean * _Nullable)fullscreen layout:(SharedBoolean * _Nullable)layout __attribute__((swift_name("init(plugins:screenshare:invite:participants:chat:reactions:polls:fullscreen:layout:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserPresetControlBarThemeElementsCompanion *companion __attribute__((swift_name("companion")));
- (SharedBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedBoolean * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedBoolean * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedBoolean * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedBoolean * _Nullable)component8 __attribute__((swift_name("component8()")));
- (SharedBoolean * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedUserPresetControlBarThemeElements *)doCopyPlugins:(SharedBoolean * _Nullable)plugins screenshare:(SharedBoolean * _Nullable)screenshare invite:(SharedBoolean * _Nullable)invite participants:(SharedBoolean * _Nullable)participants chat:(SharedBoolean * _Nullable)chat reactions:(SharedBoolean * _Nullable)reactions polls:(SharedBoolean * _Nullable)polls fullscreen:(SharedBoolean * _Nullable)fullscreen layout:(SharedBoolean * _Nullable)layout __attribute__((swift_name("doCopy(plugins:screenshare:invite:participants:chat:reactions:polls:fullscreen:layout:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedBoolean * _Nullable chat __attribute__((swift_name("chat")));
@property SharedBoolean * _Nullable fullscreen __attribute__((swift_name("fullscreen")));
@property SharedBoolean * _Nullable invite __attribute__((swift_name("invite")));
@property SharedBoolean * _Nullable layout __attribute__((swift_name("layout")));
@property SharedBoolean * _Nullable participants __attribute__((swift_name("participants")));
@property SharedBoolean * _Nullable plugins __attribute__((swift_name("plugins")));
@property SharedBoolean * _Nullable polls __attribute__((swift_name("polls")));
@property SharedBoolean * _Nullable reactions __attribute__((swift_name("reactions")));
@property SharedBoolean * _Nullable screenshare __attribute__((swift_name("screenshare")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetControlBarThemeElements.Companion")))
@interface SharedUserPresetControlBarThemeElementsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserPresetControlBarThemeElementsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetData")))
@interface SharedUserPresetData : SharedBase
- (instancetype)initWithPreset:(SharedUserPresetModel * _Nullable)preset __attribute__((swift_name("init(preset:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserPresetDataCompanion *companion __attribute__((swift_name("companion")));
- (SharedUserPresetModel * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedUserPresetData *)doCopyPreset:(SharedUserPresetModel * _Nullable)preset __attribute__((swift_name("doCopy(preset:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedUserPresetModel * _Nullable preset __attribute__((swift_name("preset")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetData.Companion")))
@interface SharedUserPresetDataCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserPresetDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetDataWrapper")))
@interface SharedUserPresetDataWrapper : SharedBase
- (instancetype)initWithSuccess:(SharedBoolean * _Nullable)success message:(NSString * _Nullable)message data:(SharedUserPresetData * _Nullable)data __attribute__((swift_name("init(success:message:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserPresetDataWrapperCompanion *companion __attribute__((swift_name("companion")));
- (SharedBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedUserPresetData * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedUserPresetDataWrapper *)doCopySuccess:(SharedBoolean * _Nullable)success message:(NSString * _Nullable)message data:(SharedUserPresetData * _Nullable)data __attribute__((swift_name("doCopy(success:message:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedUserPresetData * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) SharedBoolean * _Nullable success __attribute__((swift_name("success")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetDataWrapper.Companion")))
@interface SharedUserPresetDataWrapperCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserPresetDataWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetGridTheme")))
@interface SharedUserPresetGridTheme : SharedBase
- (instancetype)initWithMulti:(SharedUserPresetMultiTheme * _Nullable)multi single:(SharedUserPresetSingleTheme * _Nullable)single defaultView:(NSString * _Nullable)defaultView __attribute__((swift_name("init(multi:single:defaultView:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserPresetGridThemeCompanion *companion __attribute__((swift_name("companion")));
- (SharedUserPresetMultiTheme * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedUserPresetSingleTheme * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedUserPresetGridTheme *)doCopyMulti:(SharedUserPresetMultiTheme * _Nullable)multi single:(SharedUserPresetSingleTheme * _Nullable)single defaultView:(NSString * _Nullable)defaultView __attribute__((swift_name("doCopy(multi:single:defaultView:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable defaultView __attribute__((swift_name("defaultView")));
@property SharedUserPresetMultiTheme * _Nullable multi __attribute__((swift_name("multi")));
@property SharedUserPresetSingleTheme * _Nullable single __attribute__((swift_name("single")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetGridTheme.Companion")))
@interface SharedUserPresetGridThemeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserPresetGridThemeCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetHeaderTheme")))
@interface SharedUserPresetHeaderTheme : SharedBase
- (instancetype)initWithIsEnabled:(SharedBoolean * _Nullable)isEnabled elements:(SharedUserPresetHeaderThemeElements * _Nullable)elements __attribute__((swift_name("init(isEnabled:elements:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserPresetHeaderThemeCompanion *companion __attribute__((swift_name("companion")));
- (SharedBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedUserPresetHeaderThemeElements * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedUserPresetHeaderTheme *)doCopyIsEnabled:(SharedBoolean * _Nullable)isEnabled elements:(SharedUserPresetHeaderThemeElements * _Nullable)elements __attribute__((swift_name("doCopy(isEnabled:elements:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedUserPresetHeaderThemeElements * _Nullable elements __attribute__((swift_name("elements")));
@property SharedBoolean * _Nullable isEnabled __attribute__((swift_name("isEnabled")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetHeaderTheme.Companion")))
@interface SharedUserPresetHeaderThemeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserPresetHeaderThemeCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetHeaderThemeElements")))
@interface SharedUserPresetHeaderThemeElements : SharedBase
- (instancetype)initWithLogo:(NSString * _Nullable)logo timer:(SharedBoolean * _Nullable)timer title:(SharedBoolean * _Nullable)title participantCount:(SharedBoolean * _Nullable)participantCount changeLayout:(SharedBoolean * _Nullable)changeLayout __attribute__((swift_name("init(logo:timer:title:participantCount:changeLayout:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserPresetHeaderThemeElementsCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedBoolean * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedBoolean * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedUserPresetHeaderThemeElements *)doCopyLogo:(NSString * _Nullable)logo timer:(SharedBoolean * _Nullable)timer title:(SharedBoolean * _Nullable)title participantCount:(SharedBoolean * _Nullable)participantCount changeLayout:(SharedBoolean * _Nullable)changeLayout __attribute__((swift_name("doCopy(logo:timer:title:participantCount:changeLayout:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedBoolean * _Nullable changeLayout __attribute__((swift_name("changeLayout")));
@property NSString * _Nullable logo __attribute__((swift_name("logo")));
@property SharedBoolean * _Nullable participantCount __attribute__((swift_name("participantCount")));
@property SharedBoolean * _Nullable timer __attribute__((swift_name("timer")));
@property SharedBoolean * _Nullable title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetHeaderThemeElements.Companion")))
@interface SharedUserPresetHeaderThemeElementsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserPresetHeaderThemeElementsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetModel")))
@interface SharedUserPresetModel : SharedBase
- (instancetype)initWithPermissions:(SharedUserPresetPermissionsModel * _Nullable)permissions theme:(SharedUserPresetThemeModel * _Nullable)theme version:(NSString * _Nullable)version presetName:(NSString * _Nullable)presetName __attribute__((swift_name("init(permissions:theme:version:presetName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserPresetModelCompanion *companion __attribute__((swift_name("companion")));
- (SharedUserPresetPermissionsModel * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedUserPresetThemeModel * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedUserPresetModel *)doCopyPermissions:(SharedUserPresetPermissionsModel * _Nullable)permissions theme:(SharedUserPresetThemeModel * _Nullable)theme version:(NSString * _Nullable)version presetName:(NSString * _Nullable)presetName __attribute__((swift_name("doCopy(permissions:theme:version:presetName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedUserPresetPermissionsModel * _Nullable permissions __attribute__((swift_name("permissions")));
@property (readonly) NSString * _Nullable presetName __attribute__((swift_name("presetName")));
@property (readonly) SharedUserPresetThemeModel * _Nullable theme __attribute__((swift_name("theme")));
@property (readonly) NSString * _Nullable version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetModel.Companion")))
@interface SharedUserPresetModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserPresetModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetMultiTheme")))
@interface SharedUserPresetMultiTheme : SharedBase
- (instancetype)initWithMaxVideoCount:(SharedInt * _Nullable)maxVideoCount videoFit:(NSString * _Nullable)videoFit __attribute__((swift_name("init(maxVideoCount:videoFit:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserPresetMultiThemeCompanion *companion __attribute__((swift_name("companion")));
- (SharedInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedUserPresetMultiTheme *)doCopyMaxVideoCount:(SharedInt * _Nullable)maxVideoCount videoFit:(NSString * _Nullable)videoFit __attribute__((swift_name("doCopy(maxVideoCount:videoFit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedInt * _Nullable maxVideoCount __attribute__((swift_name("maxVideoCount")));
@property NSString * _Nullable videoFit __attribute__((swift_name("videoFit")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetMultiTheme.Companion")))
@interface SharedUserPresetMultiThemeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserPresetMultiThemeCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetPermissionsModel")))
@interface SharedUserPresetPermissionsModel : SharedBase
- (instancetype)initWithViewType:(NSString * _Nullable)viewType acceptWaitingRequests:(SharedBoolean * _Nullable)acceptWaitingRequests requestProduce:(SharedBoolean * _Nullable)requestProduce canAllowParticipantAudio:(SharedBoolean * _Nullable)canAllowParticipantAudio canAllowParticipantScreensharing:(SharedBoolean * _Nullable)canAllowParticipantScreensharing canDisableParticipantAudio:(SharedBoolean * _Nullable)canDisableParticipantAudio canDisableParticipantVideo:(SharedBoolean * _Nullable)canDisableParticipantVideo canAllowParticipantVideo:(SharedBoolean * _Nullable)canAllowParticipantVideo requestKickParticipant:(SharedBoolean * _Nullable)requestKickParticipant kickParticipant:(SharedBoolean * _Nullable)kickParticipant pinParticipant:(SharedBoolean * _Nullable)pinParticipant canRecord:(SharedBoolean * _Nullable)canRecord waitingRoomType:(NSString * _Nullable)waitingRoomType plugins:(SharedUserPresetPluginPermissions * _Nullable)plugins polls:(SharedUserPresetPollsPermissions * _Nullable)polls produce:(SharedUserPresetProducePermissions * _Nullable)produce chat:(SharedUserPresetChatPermissionProps * _Nullable)chat reactions:(SharedBoolean * _Nullable)reactions hiddenParticipant:(SharedBoolean * _Nullable)hiddenParticipant showParticipantList:(SharedBoolean * _Nullable)showParticipantList canChangeParticipantRole:(SharedBoolean * _Nullable)canChangeParticipantRole canChangeTheme:(SharedBoolean * _Nullable)canChangeTheme canPresent:(SharedBoolean * _Nullable)canPresent acceptPresentRequests:(SharedBoolean * _Nullable)acceptPresentRequests canEditDisplayName:(SharedBoolean * _Nullable)canEditDisplayName isRecorder:(SharedBoolean * _Nullable)isRecorder __attribute__((swift_name("init(viewType:acceptWaitingRequests:requestProduce:canAllowParticipantAudio:canAllowParticipantScreensharing:canDisableParticipantAudio:canDisableParticipantVideo:canAllowParticipantVideo:requestKickParticipant:kickParticipant:pinParticipant:canRecord:waitingRoomType:plugins:polls:produce:chat:reactions:hiddenParticipant:showParticipantList:canChangeParticipantRole:canChangeTheme:canPresent:acceptPresentRequests:canEditDisplayName:isRecorder:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserPresetPermissionsModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedBoolean * _Nullable)component10 __attribute__((swift_name("component10()")));
- (SharedBoolean * _Nullable)component11 __attribute__((swift_name("component11()")));
- (SharedBoolean * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (SharedUserPresetPluginPermissions * _Nullable)component14 __attribute__((swift_name("component14()")));
- (SharedUserPresetPollsPermissions * _Nullable)component15 __attribute__((swift_name("component15()")));
- (SharedUserPresetProducePermissions * _Nullable)component16 __attribute__((swift_name("component16()")));
- (SharedUserPresetChatPermissionProps * _Nullable)component17 __attribute__((swift_name("component17()")));
- (SharedBoolean * _Nullable)component18 __attribute__((swift_name("component18()")));
- (SharedBoolean * _Nullable)component19 __attribute__((swift_name("component19()")));
- (SharedBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedBoolean * _Nullable)component20 __attribute__((swift_name("component20()")));
- (SharedBoolean * _Nullable)component21 __attribute__((swift_name("component21()")));
- (SharedBoolean * _Nullable)component22 __attribute__((swift_name("component22()")));
- (SharedBoolean * _Nullable)component23 __attribute__((swift_name("component23()")));
- (SharedBoolean * _Nullable)component24 __attribute__((swift_name("component24()")));
- (SharedBoolean * _Nullable)component25 __attribute__((swift_name("component25()")));
- (SharedBoolean * _Nullable)component26 __attribute__((swift_name("component26()")));
- (SharedBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedBoolean * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedBoolean * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedBoolean * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedBoolean * _Nullable)component8 __attribute__((swift_name("component8()")));
- (SharedBoolean * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedUserPresetPermissionsModel *)doCopyViewType:(NSString * _Nullable)viewType acceptWaitingRequests:(SharedBoolean * _Nullable)acceptWaitingRequests requestProduce:(SharedBoolean * _Nullable)requestProduce canAllowParticipantAudio:(SharedBoolean * _Nullable)canAllowParticipantAudio canAllowParticipantScreensharing:(SharedBoolean * _Nullable)canAllowParticipantScreensharing canDisableParticipantAudio:(SharedBoolean * _Nullable)canDisableParticipantAudio canDisableParticipantVideo:(SharedBoolean * _Nullable)canDisableParticipantVideo canAllowParticipantVideo:(SharedBoolean * _Nullable)canAllowParticipantVideo requestKickParticipant:(SharedBoolean * _Nullable)requestKickParticipant kickParticipant:(SharedBoolean * _Nullable)kickParticipant pinParticipant:(SharedBoolean * _Nullable)pinParticipant canRecord:(SharedBoolean * _Nullable)canRecord waitingRoomType:(NSString * _Nullable)waitingRoomType plugins:(SharedUserPresetPluginPermissions * _Nullable)plugins polls:(SharedUserPresetPollsPermissions * _Nullable)polls produce:(SharedUserPresetProducePermissions * _Nullable)produce chat:(SharedUserPresetChatPermissionProps * _Nullable)chat reactions:(SharedBoolean * _Nullable)reactions hiddenParticipant:(SharedBoolean * _Nullable)hiddenParticipant showParticipantList:(SharedBoolean * _Nullable)showParticipantList canChangeParticipantRole:(SharedBoolean * _Nullable)canChangeParticipantRole canChangeTheme:(SharedBoolean * _Nullable)canChangeTheme canPresent:(SharedBoolean * _Nullable)canPresent acceptPresentRequests:(SharedBoolean * _Nullable)acceptPresentRequests canEditDisplayName:(SharedBoolean * _Nullable)canEditDisplayName isRecorder:(SharedBoolean * _Nullable)isRecorder __attribute__((swift_name("doCopy(viewType:acceptWaitingRequests:requestProduce:canAllowParticipantAudio:canAllowParticipantScreensharing:canDisableParticipantAudio:canDisableParticipantVideo:canAllowParticipantVideo:requestKickParticipant:kickParticipant:pinParticipant:canRecord:waitingRoomType:plugins:polls:produce:chat:reactions:hiddenParticipant:showParticipantList:canChangeParticipantRole:canChangeTheme:canPresent:acceptPresentRequests:canEditDisplayName:isRecorder:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedBoolean * _Nullable acceptPresentRequests __attribute__((swift_name("acceptPresentRequests")));
@property (readonly) SharedBoolean * _Nullable acceptWaitingRequests __attribute__((swift_name("acceptWaitingRequests")));
@property (readonly) SharedBoolean * _Nullable canAllowParticipantAudio __attribute__((swift_name("canAllowParticipantAudio")));
@property (readonly) SharedBoolean * _Nullable canAllowParticipantScreensharing __attribute__((swift_name("canAllowParticipantScreensharing")));
@property (readonly) SharedBoolean * _Nullable canAllowParticipantVideo __attribute__((swift_name("canAllowParticipantVideo")));
@property (readonly) SharedBoolean * _Nullable canChangeParticipantRole __attribute__((swift_name("canChangeParticipantRole")));
@property (readonly) SharedBoolean * _Nullable canChangeTheme __attribute__((swift_name("canChangeTheme")));
@property (readonly) SharedBoolean * _Nullable canDisableParticipantAudio __attribute__((swift_name("canDisableParticipantAudio")));
@property (readonly) SharedBoolean * _Nullable canDisableParticipantVideo __attribute__((swift_name("canDisableParticipantVideo")));
@property (readonly) SharedBoolean * _Nullable canEditDisplayName __attribute__((swift_name("canEditDisplayName")));
@property (readonly) SharedBoolean * _Nullable canPresent __attribute__((swift_name("canPresent")));
@property (readonly) SharedBoolean * _Nullable canRecord __attribute__((swift_name("canRecord")));
@property (readonly) SharedUserPresetChatPermissionProps * _Nullable chat __attribute__((swift_name("chat")));
@property (readonly) SharedBoolean * _Nullable hiddenParticipant __attribute__((swift_name("hiddenParticipant")));
@property (readonly) SharedBoolean * _Nullable isRecorder __attribute__((swift_name("isRecorder")));
@property (readonly) SharedBoolean * _Nullable kickParticipant __attribute__((swift_name("kickParticipant")));
@property (readonly) SharedBoolean * _Nullable pinParticipant __attribute__((swift_name("pinParticipant")));
@property (readonly) SharedUserPresetPluginPermissions * _Nullable plugins __attribute__((swift_name("plugins")));
@property (readonly) SharedUserPresetPollsPermissions * _Nullable polls __attribute__((swift_name("polls")));
@property (readonly) SharedUserPresetProducePermissions * _Nullable produce __attribute__((swift_name("produce")));
@property (readonly) SharedBoolean * _Nullable reactions __attribute__((swift_name("reactions")));
@property (readonly) SharedBoolean * _Nullable requestKickParticipant __attribute__((swift_name("requestKickParticipant")));
@property (readonly) SharedBoolean * _Nullable requestProduce __attribute__((swift_name("requestProduce")));
@property (readonly) SharedBoolean * _Nullable showParticipantList __attribute__((swift_name("showParticipantList")));
@property (readonly) NSString * _Nullable viewType __attribute__((swift_name("viewType")));
@property (readonly) NSString * _Nullable waitingRoomType __attribute__((swift_name("waitingRoomType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetPermissionsModel.Companion")))
@interface SharedUserPresetPermissionsModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserPresetPermissionsModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetPluginConfig")))
@interface SharedUserPresetPluginConfig : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedUserPresetPluginConfigCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetPluginConfig.Companion")))
@interface SharedUserPresetPluginConfigCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserPresetPluginConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetPluginPermissions")))
@interface SharedUserPresetPluginPermissions : SharedBase
- (instancetype)initWithCanClose:(SharedBoolean * _Nullable)canClose canStart:(SharedBoolean * _Nullable)canStart canEditAcl:(SharedBoolean * _Nullable)canEditAcl config:(SharedUserPresetPluginConfig * _Nullable)config __attribute__((swift_name("init(canClose:canStart:canEditAcl:config:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserPresetPluginPermissionsCompanion *companion __attribute__((swift_name("companion")));
- (SharedBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedUserPresetPluginConfig * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedUserPresetPluginPermissions *)doCopyCanClose:(SharedBoolean * _Nullable)canClose canStart:(SharedBoolean * _Nullable)canStart canEditAcl:(SharedBoolean * _Nullable)canEditAcl config:(SharedUserPresetPluginConfig * _Nullable)config __attribute__((swift_name("doCopy(canClose:canStart:canEditAcl:config:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedBoolean * _Nullable canClose __attribute__((swift_name("canClose")));
@property (readonly) SharedBoolean * _Nullable canEditAcl __attribute__((swift_name("canEditAcl")));
@property (readonly) SharedBoolean * _Nullable canStart __attribute__((swift_name("canStart")));
@property (readonly) SharedUserPresetPluginConfig * _Nullable config __attribute__((swift_name("config")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetPluginPermissions.Companion")))
@interface SharedUserPresetPluginPermissionsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserPresetPluginPermissionsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetPollsPermissions")))
@interface SharedUserPresetPollsPermissions : SharedBase
- (instancetype)initWithCanCreate:(SharedBoolean * _Nullable)canCreate canVote:(SharedBoolean * _Nullable)canVote canView:(SharedBoolean * _Nullable)canView __attribute__((swift_name("init(canCreate:canVote:canView:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserPresetPollsPermissionsCompanion *companion __attribute__((swift_name("companion")));
- (SharedBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedUserPresetPollsPermissions *)doCopyCanCreate:(SharedBoolean * _Nullable)canCreate canVote:(SharedBoolean * _Nullable)canVote canView:(SharedBoolean * _Nullable)canView __attribute__((swift_name("doCopy(canCreate:canVote:canView:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedBoolean * _Nullable canCreate __attribute__((swift_name("canCreate")));
@property (readonly) SharedBoolean * _Nullable canView __attribute__((swift_name("canView")));
@property (readonly) SharedBoolean * _Nullable canVote __attribute__((swift_name("canVote")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetPollsPermissions.Companion")))
@interface SharedUserPresetPollsPermissionsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserPresetPollsPermissionsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetProducePermissions")))
@interface SharedUserPresetProducePermissions : SharedBase
- (instancetype)initWithVideo:(SharedUserPresetVideoPermissions * _Nullable)video audio:(SharedBoolean * _Nullable)audio screenshare:(SharedUserPresetScreenSharePermissions * _Nullable)screenshare __attribute__((swift_name("init(video:audio:screenshare:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserPresetProducePermissionsCompanion *companion __attribute__((swift_name("companion")));
- (SharedUserPresetVideoPermissions * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedUserPresetScreenSharePermissions * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedUserPresetProducePermissions *)doCopyVideo:(SharedUserPresetVideoPermissions * _Nullable)video audio:(SharedBoolean * _Nullable)audio screenshare:(SharedUserPresetScreenSharePermissions * _Nullable)screenshare __attribute__((swift_name("doCopy(video:audio:screenshare:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedBoolean * _Nullable audio __attribute__((swift_name("audio")));
@property (readonly) SharedUserPresetScreenSharePermissions * _Nullable screenshare __attribute__((swift_name("screenshare")));
@property (readonly) SharedUserPresetVideoPermissions * _Nullable video __attribute__((swift_name("video")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetProducePermissions.Companion")))
@interface SharedUserPresetProducePermissionsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserPresetProducePermissionsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetRequestModel")))
@interface SharedUserPresetRequestModel : SharedBase
- (instancetype)initWithAuthToken:(NSString * _Nullable)authToken clientType:(NSString * _Nullable)clientType roomName:(NSString * _Nullable)roomName version:(NSString * _Nullable)version __attribute__((swift_name("init(authToken:clientType:roomName:version:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserPresetRequestModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedUserPresetRequestModel *)doCopyAuthToken:(NSString * _Nullable)authToken clientType:(NSString * _Nullable)clientType roomName:(NSString * _Nullable)roomName version:(NSString * _Nullable)version __attribute__((swift_name("doCopy(authToken:clientType:roomName:version:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable authToken __attribute__((swift_name("authToken")));
@property (readonly) NSString * _Nullable clientType __attribute__((swift_name("clientType")));
@property (readonly) NSString * _Nullable roomName __attribute__((swift_name("roomName")));
@property (readonly) NSString * _Nullable version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetRequestModel.Companion")))
@interface SharedUserPresetRequestModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserPresetRequestModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetScreenSharePermissions")))
@interface SharedUserPresetScreenSharePermissions : SharedBase
- (instancetype)initWithAllow:(SharedBoolean * _Nullable)allow quality:(NSString * _Nullable)quality frameRate:(SharedInt * _Nullable)frameRate __attribute__((swift_name("init(allow:quality:frameRate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserPresetScreenSharePermissionsCompanion *companion __attribute__((swift_name("companion")));
- (SharedBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedUserPresetScreenSharePermissions *)doCopyAllow:(SharedBoolean * _Nullable)allow quality:(NSString * _Nullable)quality frameRate:(SharedInt * _Nullable)frameRate __attribute__((swift_name("doCopy(allow:quality:frameRate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedBoolean * _Nullable allow __attribute__((swift_name("allow")));
@property (readonly) SharedInt * _Nullable frameRate __attribute__((swift_name("frameRate")));
@property (readonly) NSString * _Nullable quality __attribute__((swift_name("quality")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetScreenSharePermissions.Companion")))
@interface SharedUserPresetScreenSharePermissionsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserPresetScreenSharePermissionsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetSetupScreenTheme")))
@interface SharedUserPresetSetupScreenTheme : SharedBase
- (instancetype)initWithIsEnabled:(SharedBoolean * _Nullable)isEnabled __attribute__((swift_name("init(isEnabled:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserPresetSetupScreenThemeCompanion *companion __attribute__((swift_name("companion")));
- (SharedBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedUserPresetSetupScreenTheme *)doCopyIsEnabled:(SharedBoolean * _Nullable)isEnabled __attribute__((swift_name("doCopy(isEnabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedBoolean * _Nullable isEnabled __attribute__((swift_name("isEnabled")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetSetupScreenTheme.Companion")))
@interface SharedUserPresetSetupScreenThemeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserPresetSetupScreenThemeCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetSingleTheme")))
@interface SharedUserPresetSingleTheme : SharedBase
- (instancetype)initWithMaxVideoCount:(SharedInt * _Nullable)maxVideoCount videoFit:(NSString * _Nullable)videoFit __attribute__((swift_name("init(maxVideoCount:videoFit:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserPresetSingleThemeCompanion *companion __attribute__((swift_name("companion")));
- (SharedInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedUserPresetSingleTheme *)doCopyMaxVideoCount:(SharedInt * _Nullable)maxVideoCount videoFit:(NSString * _Nullable)videoFit __attribute__((swift_name("doCopy(maxVideoCount:videoFit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedInt * _Nullable maxVideoCount __attribute__((swift_name("maxVideoCount")));
@property NSString * _Nullable videoFit __attribute__((swift_name("videoFit")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetSingleTheme.Companion")))
@interface SharedUserPresetSingleThemeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserPresetSingleThemeCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetThemeModel")))
@interface SharedUserPresetThemeModel : SharedBase
- (instancetype)initWithSetupScreen:(SharedUserPresetSetupScreenTheme * _Nullable)setupScreen aloneHere:(SharedUserPresetAloneHereTheme * _Nullable)aloneHere waitingRoom:(SharedUserPresetWaitingRoomTheme * _Nullable)waitingRoom controlBar:(SharedUserPresetControlBarTheme * _Nullable)controlBar header:(SharedUserPresetHeaderTheme * _Nullable)header pipMode:(SharedBoolean * _Nullable)pipMode autoTune:(SharedBoolean * _Nullable)autoTune grid:(SharedUserPresetGridTheme * _Nullable)grid colors:(SharedUserPresetColorsTheme * _Nullable)colors __attribute__((swift_name("init(setupScreen:aloneHere:waitingRoom:controlBar:header:pipMode:autoTune:grid:colors:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserPresetThemeModelCompanion *companion __attribute__((swift_name("companion")));
- (SharedUserPresetSetupScreenTheme * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedUserPresetAloneHereTheme * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedUserPresetWaitingRoomTheme * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedUserPresetControlBarTheme * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedUserPresetHeaderTheme * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedBoolean * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedUserPresetGridTheme * _Nullable)component8 __attribute__((swift_name("component8()")));
- (SharedUserPresetColorsTheme * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedUserPresetThemeModel *)doCopySetupScreen:(SharedUserPresetSetupScreenTheme * _Nullable)setupScreen aloneHere:(SharedUserPresetAloneHereTheme * _Nullable)aloneHere waitingRoom:(SharedUserPresetWaitingRoomTheme * _Nullable)waitingRoom controlBar:(SharedUserPresetControlBarTheme * _Nullable)controlBar header:(SharedUserPresetHeaderTheme * _Nullable)header pipMode:(SharedBoolean * _Nullable)pipMode autoTune:(SharedBoolean * _Nullable)autoTune grid:(SharedUserPresetGridTheme * _Nullable)grid colors:(SharedUserPresetColorsTheme * _Nullable)colors __attribute__((swift_name("doCopy(setupScreen:aloneHere:waitingRoom:controlBar:header:pipMode:autoTune:grid:colors:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedUserPresetAloneHereTheme * _Nullable aloneHere __attribute__((swift_name("aloneHere")));
@property SharedBoolean * _Nullable autoTune __attribute__((swift_name("autoTune")));
@property SharedUserPresetColorsTheme * _Nullable colors __attribute__((swift_name("colors")));
@property SharedUserPresetControlBarTheme * _Nullable controlBar __attribute__((swift_name("controlBar")));
@property SharedUserPresetGridTheme * _Nullable grid __attribute__((swift_name("grid")));
@property SharedUserPresetHeaderTheme * _Nullable header __attribute__((swift_name("header")));
@property SharedBoolean * _Nullable pipMode __attribute__((swift_name("pipMode")));
@property SharedUserPresetSetupScreenTheme * _Nullable setupScreen __attribute__((swift_name("setupScreen")));
@property SharedUserPresetWaitingRoomTheme * _Nullable waitingRoom __attribute__((swift_name("waitingRoom")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetThemeModel.Companion")))
@interface SharedUserPresetThemeModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserPresetThemeModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetVideoPermissions")))
@interface SharedUserPresetVideoPermissions : SharedBase
- (instancetype)initWithAllow:(SharedBoolean * _Nullable)allow quality:(NSString * _Nullable)quality frameRate:(SharedInt * _Nullable)frameRate __attribute__((swift_name("init(allow:quality:frameRate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserPresetVideoPermissionsCompanion *companion __attribute__((swift_name("companion")));
- (SharedBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedUserPresetVideoPermissions *)doCopyAllow:(SharedBoolean * _Nullable)allow quality:(NSString * _Nullable)quality frameRate:(SharedInt * _Nullable)frameRate __attribute__((swift_name("doCopy(allow:quality:frameRate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedBoolean * _Nullable allow __attribute__((swift_name("allow")));
@property (readonly) SharedInt * _Nullable frameRate __attribute__((swift_name("frameRate")));
@property (readonly) NSString * _Nullable quality __attribute__((swift_name("quality")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetVideoPermissions.Companion")))
@interface SharedUserPresetVideoPermissionsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserPresetVideoPermissionsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetWaitingRoomTheme")))
@interface SharedUserPresetWaitingRoomTheme : SharedBase
- (instancetype)initWithIsEnabled:(SharedBoolean * _Nullable)isEnabled enablePreview:(SharedBoolean * _Nullable)enablePreview __attribute__((swift_name("init(isEnabled:enablePreview:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUserPresetWaitingRoomThemeCompanion *companion __attribute__((swift_name("companion")));
- (SharedBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedUserPresetWaitingRoomTheme *)doCopyIsEnabled:(SharedBoolean * _Nullable)isEnabled enablePreview:(SharedBoolean * _Nullable)enablePreview __attribute__((swift_name("doCopy(isEnabled:enablePreview:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedBoolean * _Nullable enablePreview __attribute__((swift_name("enablePreview")));
@property SharedBoolean * _Nullable isEnabled __attribute__((swift_name("isEnabled")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetWaitingRoomTheme.Companion")))
@interface SharedUserPresetWaitingRoomThemeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserPresetWaitingRoomThemeCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("InCallManagerEventCallbacks")))
@protocol SharedInCallManagerEventCallbacks
@required
- (void)onEventEventName:(NSString * _Nullable)eventName args:(id _Nullable)args __attribute__((swift_name("onEvent(eventName:args:)")));
@end;

__attribute__((swift_name("DyteCameraEventsListener")))
@protocol SharedDyteCameraEventsListener
@required
- (void)onCameraClosed __attribute__((swift_name("onCameraClosed()")));
- (void)onCameraDisconnected __attribute__((swift_name("onCameraDisconnected()")));
- (void)onCameraErrorError:(NSString * _Nullable)error __attribute__((swift_name("onCameraError(error:)")));
- (void)onCameraFreezedMessage:(NSString * _Nullable)message __attribute__((swift_name("onCameraFreezed(message:)")));
- (void)onCameraOpeningMessage:(NSString * _Nullable)message __attribute__((swift_name("onCameraOpening(message:)")));
- (void)onFirstFrameAvailable __attribute__((swift_name("onFirstFrameAvailable()")));
@end;

__attribute__((swift_name("DyteMeetingRoomEventsListener")))
@protocol SharedDyteMeetingRoomEventsListener
@required
- (void)onChatUpdatesNewMessage:(BOOL)newMessage message:(SharedDyteChatMessage * _Nullable)message messages:(NSArray<SharedDyteChatMessage *> *)messages __attribute__((swift_name("onChatUpdates(newMessage:message:messages:)")));
- (void)onMeetingInitCompleted __attribute__((swift_name("onMeetingInitCompleted()")));
- (void)onMeetingInitFailedException:(SharedKotlinException *)exception __attribute__((swift_name("onMeetingInitFailed(exception:)")));
- (void)onMeetingInitStarted __attribute__((swift_name("onMeetingInitStarted()")));
- (void)onMeetingRecordingEnded __attribute__((swift_name("onMeetingRecordingEnded()")));
- (void)onMeetingRecordingStarted __attribute__((swift_name("onMeetingRecordingStarted()")));
- (void)onMeetingRecordingStopErrorE:(SharedKotlinException *)e __attribute__((swift_name("onMeetingRecordingStopError(e:)")));
- (void)onMeetingRoomDisconnected __attribute__((swift_name("onMeetingRoomDisconnected()")));
- (void)onMeetingRoomJoinFailedException:(SharedKotlinException *)exception __attribute__((swift_name("onMeetingRoomJoinFailed(exception:)")));
- (void)onMeetingRoomJoinStarted __attribute__((swift_name("onMeetingRoomJoinStarted()")));
- (void)onMeetingRoomJoinedMeetingStartedAt:(NSString *)meetingStartedAt __attribute__((swift_name("onMeetingRoomJoined(meetingStartedAt:)")));
- (void)onMeetingRoomLeft __attribute__((swift_name("onMeetingRoomLeft()")));
- (void)onPollUpdatesNewPoll:(BOOL)newPoll pollMessages:(NSArray<SharedDytePollMessage *> *)pollMessages updatedPollMessage:(SharedDytePollMessage * _Nullable)updatedPollMessage __attribute__((swift_name("onPollUpdates(newPoll:pollMessages:updatedPollMessage:)")));
@end;

__attribute__((swift_name("DyteParticipantEventsListener")))
@protocol SharedDyteParticipantEventsListener
@required
- (void)audioUpdateAudioEnabled:(BOOL)audioEnabled participant:(SharedDyteMeetingParticipant *)participant __attribute__((swift_name("audioUpdate(audioEnabled:participant:)")));
- (void)onActiveSpeakerChangedParticipant:(SharedDyteMeetingParticipant *)participant __attribute__((swift_name("onActiveSpeakerChanged(participant:)")));
- (void)onNoActiveSpeaker __attribute__((swift_name("onNoActiveSpeaker()")));
- (void)onParticipantJoinParticipant:(SharedDyteMeetingParticipant *)participant __attribute__((swift_name("onParticipantJoin(participant:)")));
- (void)onParticipantLeaveParticipant:(SharedDyteMeetingParticipant *)participant __attribute__((swift_name("onParticipantLeave(participant:)")));
- (void)onParticipantPinnedParticipant:(SharedDyteMeetingParticipant *)participant __attribute__((swift_name("onParticipantPinned(participant:)")));
- (void)onParticipantUnpinned __attribute__((swift_name("onParticipantUnpinned()")));
- (void)onParticipantUpdatedParticipant:(SharedDyteMeetingParticipant *)participant __attribute__((swift_name("onParticipantUpdated(participant:)")));
- (void)onParticipantsUpdatedParticipants:(SharedDyteRoomParticipants *)participants isNextPagePossible:(BOOL)isNextPagePossible isPreviousPagePossible:(BOOL)isPreviousPagePossible __attribute__((swift_name("onParticipantsUpdated(participants:isNextPagePossible:isPreviousPagePossible:)")));
- (void)onScreenSharesUpdated __attribute__((swift_name("onScreenSharesUpdated()")));
- (void)videoUpdateVideoEnabled:(BOOL)videoEnabled participant:(SharedDyteMeetingParticipant *)participant __attribute__((swift_name("videoUpdate(videoEnabled:participant:)")));
@end;

__attribute__((swift_name("DytePermissionEventsListener")))
@protocol SharedDytePermissionEventsListener
@required
- (void)onPermissionsUpdatedPermissions:(NSArray<SharedPermission *> *)permissions __attribute__((swift_name("onPermissionsUpdated(permissions:)")));
@end;

__attribute__((swift_name("DyteSelfEventsListener")))
@protocol SharedDyteSelfEventsListener
@required
- (void)onAudioDevicesUpdated __attribute__((swift_name("onAudioDevicesUpdated()")));
- (void)onAudioUpdateAudioEnabled:(BOOL)audioEnabled __attribute__((swift_name("onAudioUpdate(audioEnabled:)")));
- (void)onProximityChangedIsNear:(BOOL)isNear __attribute__((swift_name("onProximityChanged(isNear:)")));
- (void)onVideoUpdateVideoEnabled:(BOOL)videoEnabled __attribute__((swift_name("onVideoUpdate(videoEnabled:)")));
@end;

__attribute__((swift_name("IDyteLoggerUtils")))
@protocol SharedIDyteLoggerUtils
@required
- (void)enableLoggerEnable:(BOOL)enable __attribute__((swift_name("enableLogger(enable:)")));
- (BOOL)isLoggerEnabled __attribute__((swift_name("isLoggerEnabled()")));
- (void)logDTag:(id)tag message:(NSString *)message __attribute__((swift_name("logD(tag:message:)")));
- (void)logETag:(id)tag message:(NSString *)message __attribute__((swift_name("logE(tag:message:)")));
- (void)logETag:(id)tag message:(NSString *)message throwable:(SharedKotlinThrowable *)throwable __attribute__((swift_name("logE(tag:message:throwable:)")));
- (void)logETag:(id)tag throwable:(SharedKotlinThrowable *)throwable __attribute__((swift_name("logE(tag:throwable:)")));
- (void)logITag:(id)tag message:(NSString *)message __attribute__((swift_name("logI(tag:message:)")));
- (void)logWTag:(id)tag message:(NSString *)message __attribute__((swift_name("logW(tag:message:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteIOSLogger")))
@interface SharedDyteIOSLogger : SharedBase <SharedIDyteLoggerUtils>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)enableLoggerEnable:(BOOL)enable __attribute__((swift_name("enableLogger(enable:)")));
- (BOOL)isLoggerEnabled __attribute__((swift_name("isLoggerEnabled()")));
- (void)logDTag:(id)tag message:(NSString *)message __attribute__((swift_name("logD(tag:message:)")));
- (void)logETag:(id)tag message:(NSString *)message __attribute__((swift_name("logE(tag:message:)")));
- (void)logETag:(id)tag message:(NSString *)message throwable:(SharedKotlinThrowable *)throwable __attribute__((swift_name("logE(tag:message:throwable:)")));
- (void)logETag:(id)tag throwable:(SharedKotlinThrowable *)throwable __attribute__((swift_name("logE(tag:throwable:)")));
- (void)logITag:(id)tag message:(NSString *)message __attribute__((swift_name("logI(tag:message:)")));
- (void)logWTag:(id)tag message:(NSString *)message __attribute__((swift_name("logW(tag:message:)")));
@property (getter=isLoggerEnabled_) BOOL isLoggerEnabled __attribute__((swift_name("isLoggerEnabled")));
@end;

__attribute__((swift_name("IDyteMediaSoupUtils")))
@protocol SharedIDyteMediaSoupUtils
@required
- (void)connectTransportId:(NSString *)id producing:(BOOL)producing onDone:(void (^)(void))onDone __attribute__((swift_name("connectTransport(id:producing:onDone:)")));
- (void)createWebRtcTransportProdModel:(SharedWebRtcCreateTransportModel *)model iceServers:(NSArray<SharedIceServerData *> *)iceServers __attribute__((swift_name("createWebRtcTransportProd(model:iceServers:)")));
- (void)createWebRtcTransportRecvModel:(SharedWebRtcCreateTransportModel *)model iceServers:(NSArray<SharedIceServerData *> *)iceServers __attribute__((swift_name("createWebRtcTransportRecv(model:iceServers:)")));
- (SharedConsumerAppData * _Nullable)getAppDataFromConsumerIdConsumerId:(NSString *)consumerId __attribute__((swift_name("getAppDataFromConsumerId(consumerId:)")));
- (NSString *)getConsumerTypeConsumerId:(NSString *)consumerId __attribute__((swift_name("getConsumerType(consumerId:)")));
- (SharedProduceData *)getProduceData __attribute__((swift_name("getProduceData()")));
- (SharedKotlinPair<id, id> *)getSelfTrack __attribute__((swift_name("getSelfTrack()")));
- (NSString * _Nullable)getVideoProducerId __attribute__((swift_name("getVideoProducerId()")));
- (void)handleCloseConsumerWebSocketConsumerModel:(SharedWebSocketConsumerClosedModel *)webSocketConsumerModel __attribute__((swift_name("handleCloseConsumer(webSocketConsumerModel:)")));
- (void)handleNewConsumerWebSocketConsumerModel:(SharedWebSocketConsumerModel *)webSocketConsumerModel onDone:(void (^)(void))onDone __attribute__((swift_name("handleNewConsumer(webSocketConsumerModel:onDone:)")));
- (void)doInitControllerContainer:(id<SharedIControllerContainer>)controllerContainer __attribute__((swift_name("doInit(controllerContainer:)")));
- (void)leaveCall __attribute__((swift_name("leaveCall()")));
- (void)loadRouterRtpCapabilitiesRouterRtpCapabilitiesString:(NSString *)routerRtpCapabilitiesString __attribute__((swift_name("loadRouterRtpCapabilities(routerRtpCapabilitiesString:)")));
- (BOOL)muteSelfAudio __attribute__((swift_name("muteSelfAudio()")));
- (BOOL)muteSelfVideo __attribute__((swift_name("muteSelfVideo()")));
- (void)onBluetoothDeviceConnectedDeviceName:(NSString *)deviceName __attribute__((swift_name("onBluetoothDeviceConnected(deviceName:)")));
- (void)onCameraStreamKilled __attribute__((swift_name("onCameraStreamKilled()")));
- (void)resumeConsumerId:(NSString *)id __attribute__((swift_name("resumeConsumer(id:)")));
- (void)setVideoProducerIdProducerId:(NSString *)producerId __attribute__((swift_name("setVideoProducerId(producerId:)")));
- (void)switchCamera __attribute__((swift_name("switchCamera()")));
- (BOOL)unmuteSelfAudio __attribute__((swift_name("unmuteSelfAudio()")));
- (BOOL)unmuteSelfVideo __attribute__((swift_name("unmuteSelfVideo()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteIOSMediaSoup")))
@interface SharedDyteIOSMediaSoup : SharedBase <SharedIDyteMediaSoupUtils>
- (instancetype)initWithMediaSoupClientCallback:(id<SharedIDyteMediaSoupClientCallback>)mediaSoupClientCallback __attribute__((swift_name("init(mediaSoupClientCallback:)"))) __attribute__((objc_designated_initializer));
- (void)connectTransportId:(NSString *)id producing:(BOOL)producing onDone:(void (^)(void))onDone __attribute__((swift_name("connectTransport(id:producing:onDone:)")));
- (void)createWebRtcTransportProdModel:(SharedWebRtcCreateTransportModel *)model iceServers:(NSArray<SharedIceServerData *> *)iceServers __attribute__((swift_name("createWebRtcTransportProd(model:iceServers:)")));
- (void)createWebRtcTransportRecvModel:(SharedWebRtcCreateTransportModel *)model iceServers:(NSArray<SharedIceServerData *> *)iceServers __attribute__((swift_name("createWebRtcTransportRecv(model:iceServers:)")));
- (SharedConsumerAppData * _Nullable)getAppDataFromConsumerIdConsumerId:(NSString *)consumerId __attribute__((swift_name("getAppDataFromConsumerId(consumerId:)")));
- (NSString *)getConsumerTypeConsumerId:(NSString *)consumerId __attribute__((swift_name("getConsumerType(consumerId:)")));
- (SharedProduceData *)getProduceData __attribute__((swift_name("getProduceData()")));
- (SharedKotlinPair<id, id> *)getSelfTrack __attribute__((swift_name("getSelfTrack()")));
- (NSString *)getVideoProducerId __attribute__((swift_name("getVideoProducerId()")));
- (void)handleCloseConsumerWebSocketConsumerModel:(SharedWebSocketConsumerClosedModel *)webSocketConsumerModel __attribute__((swift_name("handleCloseConsumer(webSocketConsumerModel:)")));
- (void)handleNewConsumerWebSocketConsumerModel:(SharedWebSocketConsumerModel *)webSocketConsumerModel onDone:(void (^)(void))onDone __attribute__((swift_name("handleNewConsumer(webSocketConsumerModel:onDone:)")));
- (void)doInitControllerContainer:(id<SharedIControllerContainer>)controllerContainer __attribute__((swift_name("doInit(controllerContainer:)")));
- (void)leaveCall __attribute__((swift_name("leaveCall()")));
- (void)loadRouterRtpCapabilitiesRouterRtpCapabilitiesString:(NSString *)routerRtpCapabilitiesString __attribute__((swift_name("loadRouterRtpCapabilities(routerRtpCapabilitiesString:)")));
- (BOOL)muteSelfAudio __attribute__((swift_name("muteSelfAudio()")));
- (BOOL)muteSelfVideo __attribute__((swift_name("muteSelfVideo()")));
- (void)onBluetoothDeviceConnectedDeviceName:(NSString *)deviceName __attribute__((swift_name("onBluetoothDeviceConnected(deviceName:)")));
- (void)onCameraStreamKilled __attribute__((swift_name("onCameraStreamKilled()")));
- (void)resumeConsumerId:(NSString *)id __attribute__((swift_name("resumeConsumer(id:)")));
- (void)setVideoProducerIdProducerId:(NSString *)producerId __attribute__((swift_name("setVideoProducerId(producerId:)")));
- (void)switchCamera __attribute__((swift_name("switchCamera()")));
- (BOOL)unmuteSelfAudio __attribute__((swift_name("unmuteSelfAudio()")));
- (BOOL)unmuteSelfVideo __attribute__((swift_name("unmuteSelfVideo()")));
@end;

__attribute__((swift_name("IDytePlatformUtils")))
@protocol SharedIDytePlatformUtils
@required
- (void)askPermissionsOnPermissionGranted:(void (^)(SharedPermissionType *))onPermissionGranted onPermissionsDenied:(void (^)(SharedPermissionType *))onPermissionsDenied __attribute__((swift_name("askPermissions(onPermissionGranted:onPermissionsDenied:)")));
- (id)getActivity __attribute__((swift_name("getActivity()")));
- (id)getAndroidApplicationContext __attribute__((swift_name("getAndroidApplicationContext()")));
- (int64_t)getCurrentTime __attribute__((swift_name("getCurrentTime()")));
- (NSString *)getDiffStartTime:(NSString *)startTime endTime:(NSString *)endTime __attribute__((swift_name("getDiff(startTime:endTime:)")));
- (NSString *)getUtcTimeNow __attribute__((swift_name("getUtcTimeNow()")));
- (NSString *)getUuid __attribute__((swift_name("getUuid()")));
- (void)printThreadDesc:(NSString * _Nullable)desc __attribute__((swift_name("printThread(desc:)")));
- (void)runOnIoThreadBlock:(void (^)(void))block __attribute__((swift_name("runOnIoThread(block:)")));
- (void)runOnMainThreadBlock:(void (^)(void))block __attribute__((swift_name("runOnMainThread(block:)")));
- (void)uploadFilePresignedUrl:(NSString *)presignedUrl fileUri:(NSString * _Nullable)fileUri controllerContainer:(id<SharedIControllerContainer>)controllerContainer __attribute__((swift_name("uploadFile(presignedUrl:fileUri:controllerContainer:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteIOSPlatform")))
@interface SharedDyteIOSPlatform : SharedBase <SharedIDytePlatformUtils>
- (instancetype)initWithUtilsProvider:(id<SharedIDytePlatformUtilsProvider>)utilsProvider __attribute__((swift_name("init(utilsProvider:)"))) __attribute__((objc_designated_initializer));
- (void)askPermissionsOnPermissionGranted:(void (^)(SharedPermissionType *))onPermissionGranted onPermissionsDenied:(void (^)(SharedPermissionType *))onPermissionsDenied __attribute__((swift_name("askPermissions(onPermissionGranted:onPermissionsDenied:)")));
- (id)getActivity __attribute__((swift_name("getActivity()")));
- (id)getAndroidApplicationContext __attribute__((swift_name("getAndroidApplicationContext()")));
- (int64_t)getCurrentTime __attribute__((swift_name("getCurrentTime()")));
- (NSString *)getDiffStartTime:(NSString *)startTime endTime:(NSString *)endTime __attribute__((swift_name("getDiff(startTime:endTime:)")));
- (NSString *)getUtcTimeNow __attribute__((swift_name("getUtcTimeNow()")));
- (NSString *)getUuid __attribute__((swift_name("getUuid()")));
- (void)printThreadDesc:(NSString * _Nullable)desc __attribute__((swift_name("printThread(desc:)")));
- (void)runOnIoThreadBlock:(void (^)(void))block __attribute__((swift_name("runOnIoThread(block:)")));
- (void)runOnMainThreadBlock:(void (^)(void))block __attribute__((swift_name("runOnMainThread(block:)")));
- (void)uploadFilePresignedUrl:(NSString *)presignedUrl fileUri:(NSString * _Nullable)fileUri controllerContainer:(id<SharedIControllerContainer>)controllerContainer __attribute__((swift_name("uploadFile(presignedUrl:fileUri:controllerContainer:)")));
@end;

__attribute__((swift_name("IDytePlatformUtilsProvider")))
@protocol SharedIDytePlatformUtilsProvider
@required
- (id<SharedIControllerContainer>)getControllerContainer __attribute__((swift_name("getControllerContainer()")));
- (id<SharedIDyteLoggerUtils>)getLogger __attribute__((swift_name("getLogger()")));
- (id<SharedIDyteMediaSoupUtils>)getMediaSoupUtils __attribute__((swift_name("getMediaSoupUtils()")));
- (id<SharedIDyteMediaUtils>)getMediaUtils __attribute__((swift_name("getMediaUtils()")));
- (id<SharedIDytePeerConnectionUtils>)getPeerConnectionUtils __attribute__((swift_name("getPeerConnectionUtils()")));
- (id<SharedIDytePlatformUtils>)getPlatformUtils __attribute__((swift_name("getPlatformUtils()")));
- (void)doInitControllerContainer:(id<SharedIControllerContainer>)controllerContainer mediaSoupClientCallback:(id<SharedIDyteMediaSoupClientCallback>)mediaSoupClientCallback __attribute__((swift_name("doInit(controllerContainer:mediaSoupClientCallback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteIOSPlatformProvider")))
@interface SharedDyteIOSPlatformProvider : SharedBase <SharedIDytePlatformUtilsProvider>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<SharedIControllerContainer>)getControllerContainer __attribute__((swift_name("getControllerContainer()")));
- (id<SharedIDyteLoggerUtils>)getLogger __attribute__((swift_name("getLogger()")));
- (id<SharedIDyteMediaSoupUtils>)getMediaSoupUtils __attribute__((swift_name("getMediaSoupUtils()")));
- (id<SharedIDyteMediaUtils>)getMediaUtils __attribute__((swift_name("getMediaUtils()")));
- (id<SharedIDytePeerConnectionUtils>)getPeerConnectionUtils __attribute__((swift_name("getPeerConnectionUtils()")));
- (id<SharedIDytePlatformUtils>)getPlatformUtils __attribute__((swift_name("getPlatformUtils()")));
- (void)doInitControllerContainer:(id<SharedIControllerContainer>)controllerContainer mediaSoupClientCallback:(id<SharedIDyteMediaSoupClientCallback>)mediaSoupClientCallback __attribute__((swift_name("doInit(controllerContainer:mediaSoupClientCallback:)")));
@end;

__attribute__((swift_name("IDyteMediaUtils")))
@protocol SharedIDyteMediaUtils
@required
- (NSArray<SharedDyteAudioDevice *> *)getAudioDevices __attribute__((swift_name("getAudioDevices()")));
- (SharedDyteAudioDevice *)getSelectedAudioDevice __attribute__((swift_name("getSelectedAudioDevice()")));
- (SharedDyteVideoDevice *)getSelectedVideoDevice __attribute__((swift_name("getSelectedVideoDevice()")));
- (NSArray<SharedDyteVideoDevice *> *)getVideoDevices __attribute__((swift_name("getVideoDevices()")));
- (void)doInit __attribute__((swift_name("doInit()")));
- (void)setAudioDeviceDevice:(SharedDyteAudioDevice *)device __attribute__((swift_name("setAudioDevice(device:)")));
- (void)setVideoDeviceDevice:(SharedDyteVideoDevice *)device __attribute__((swift_name("setVideoDevice(device:)")));
@end;

__attribute__((swift_name("IDytePeerConnectionUtils")))
@protocol SharedIDytePeerConnectionUtils
@required
- (id)createAudioTrackId:(NSString *)id __attribute__((swift_name("createAudioTrack(id:)")));
- (id)createVideoTrackId:(NSString *)id __attribute__((swift_name("createVideoTrack(id:)")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (id)getEglContext __attribute__((swift_name("getEglContext()")));
- (void)onCameraClosed __attribute__((swift_name("onCameraClosed()")));
- (void)resumeVideo __attribute__((swift_name("resumeVideo()")));
- (void)stopVideo __attribute__((swift_name("stopVideo()")));
- (void)switchCamera __attribute__((swift_name("switchCamera()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface SharedKotlinByteArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedByte *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface SharedKotlinByteArray (Extensions)
- (NSData *)toData __attribute__((swift_name("toData()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NSDataByteArrayKt")))
@interface SharedNSDataByteArrayKt : SharedBase
+ (SharedKotlinByteArray *)toByteArray:(NSData *)receiver __attribute__((swift_name("toByteArray(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteChatMessageKt")))
@interface SharedDyteChatMessageKt : SharedBase
+ (NSDictionary<NSString *, id> *)encodeDyteChatMessageMessage:(SharedDyteChatMessage *)message __attribute__((swift_name("encodeDyteChatMessage(message:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEventKt")))
@interface SharedSocketEventKt : SharedBase
@property (class, readonly) NSString *EVENT_CONNECT __attribute__((swift_name("EVENT_CONNECT")));
@property (class, readonly) NSString *EVENT_CONNECTING __attribute__((swift_name("EVENT_CONNECTING")));
@property (class, readonly) NSString *EVENT_CONNECT_ERROR __attribute__((swift_name("EVENT_CONNECT_ERROR")));
@property (class, readonly) NSString *EVENT_DISCONNECT __attribute__((swift_name("EVENT_DISCONNECT")));
@property (class, readonly) NSString *EVENT_ERROR __attribute__((swift_name("EVENT_ERROR")));
@property (class, readonly) NSString *EVENT_MESSAGE __attribute__((swift_name("EVENT_MESSAGE")));
@property (class, readonly) NSString *EVENT_PING __attribute__((swift_name("EVENT_PING")));
@property (class, readonly) NSString *EVENT_PONG __attribute__((swift_name("EVENT_PONG")));
@property (class, readonly) NSString *EVENT_RECONNECT __attribute__((swift_name("EVENT_RECONNECT")));
@property (class, readonly) NSString *EVENT_RECONNECT_ATTEMPT __attribute__((swift_name("EVENT_RECONNECT_ATTEMPT")));
@property (class, readonly) NSString *EVENT_RECONNECT_ERROR __attribute__((swift_name("EVENT_RECONNECT_ERROR")));
@property (class, readonly) NSString *EVENT_RECONNECT_FAILED __attribute__((swift_name("EVENT_RECONNECT_FAILED")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinUnsupportedOperationException")))
@interface SharedKotlinUnsupportedOperationException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SharedKotlinEnumCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SharedKotlinUnit : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface SharedKotlinx_serialization_jsonJsonElement : SharedBase
@property (class, readonly, getter=companion) SharedKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SharedKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SharedKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SharedKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SharedKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SharedKotlinx_serialization_coreKSerializer <SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol SharedKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol SharedKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface SharedKtor_client_coreHttpClient : SharedBase <SharedKotlinx_coroutines_coreCoroutineScope, SharedKtor_ioCloseable>
- (instancetype)initWithEngine:(id<SharedKtor_client_coreHttpClientEngine>)engine userConfig:(SharedKtor_client_coreHttpClientConfig<SharedKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (SharedKtor_client_coreHttpClient *)configBlock:(void (^)(SharedKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<SharedKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<SharedKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) SharedKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) SharedKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) SharedKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) SharedKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) SharedKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) SharedKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface SharedKotlinPair<__covariant A, __covariant B> : SharedBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()")));
- (B _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface SharedKotlinByteIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface SharedKotlinx_serialization_jsonJsonElementCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SharedKotlinx_serialization_coreEncoder
@required
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<SharedKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SharedKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<SharedKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<SharedKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<SharedKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) SharedKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SharedKotlinx_serialization_coreDecoder
@required
- (id<SharedKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<SharedKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (SharedKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SharedKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SharedKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SharedKotlinCoroutineContextElement> _Nullable)getKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SharedKotlinCoroutineContext>)minusKeyKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SharedKotlinCoroutineContext>)plusContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol SharedKtor_client_coreHttpClientEngine <SharedKotlinx_coroutines_coreCoroutineScope, SharedKtor_ioCloseable>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(SharedKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(SharedKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(SharedKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) SharedKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) SharedKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<SharedKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface SharedKtor_client_coreHttpClientEngineConfig : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property SharedKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface SharedKtor_client_coreHttpClientConfig<T> : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(SharedKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<SharedKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(SharedKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(SharedKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol SharedKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol SharedKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(SharedKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(SharedKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<SharedKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface SharedKtor_eventsEvents : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(SharedKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<SharedKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(SharedKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(SharedKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface SharedKtor_utilsPipeline<TSubject, TContext> : SharedBase
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(SharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(SharedKtor_utilsPipelinePhase *)reference phase:(SharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(SharedKtor_utilsPipelinePhase *)reference phase:(SharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(SharedKtor_utilsPipelinePhase *)phase block:(id<SharedKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<SharedKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(SharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(SharedKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(SharedKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(SharedKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<SharedKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface SharedKtor_client_coreHttpReceivePipeline : SharedKtor_utilsPipeline<SharedKtor_client_coreHttpResponse *, SharedKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface SharedKtor_client_coreHttpRequestPipeline : SharedKtor_utilsPipeline<id, SharedKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface SharedKtor_client_coreHttpResponsePipeline : SharedKtor_utilsPipeline<SharedKtor_client_coreHttpResponseContainer *, SharedKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface SharedKtor_client_coreHttpSendPipeline : SharedKtor_utilsPipeline<id, SharedKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SharedKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<SharedKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SharedKotlinx_serialization_coreSerializersModule : SharedBase
- (void)dumpToCollector:(id<SharedKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<SharedKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<SharedKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol SharedKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SharedKotlinx_serialization_coreSerialKind : SharedBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SharedKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<SharedKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedKotlinNothing : SharedBase
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SharedKotlinCoroutineContextElement <SharedKotlinCoroutineContext>
@required
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SharedKotlinCoroutineContextKey
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface SharedKtor_client_coreHttpRequestData : SharedBase
- (instancetype)initWithUrl:(SharedKtor_httpUrl *)url method:(SharedKtor_httpHttpMethod *)method headers:(id<SharedKtor_httpHeaders>)headers body:(SharedKtor_httpOutgoingContent *)body executionContext:(id<SharedKotlinx_coroutines_coreJob>)executionContext attributes:(id<SharedKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<SharedKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SharedKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<SharedKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<SharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SharedKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SharedKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface SharedKtor_client_coreHttpResponseData : SharedBase
- (instancetype)initWithStatusCode:(SharedKtor_httpHttpStatusCode *)statusCode requestTime:(SharedKtor_utilsGMTDate *)requestTime headers:(id<SharedKtor_httpHeaders>)headers version:(SharedKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<SharedKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<SharedKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<SharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SharedKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) SharedKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) SharedKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface SharedKotlinAbstractCoroutineContextElement : SharedBase <SharedKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol SharedKotlinContinuationInterceptor <SharedKotlinCoroutineContextElement>
@required
- (id<SharedKotlinContinuation>)interceptContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface SharedKotlinx_coroutines_coreCoroutineDispatcher : SharedKotlinAbstractCoroutineContextElement <SharedKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<SharedKotlinCoroutineContext>)context block:(id<SharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<SharedKotlinCoroutineContext>)context block:(id<SharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<SharedKotlinContinuation>)interceptContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (SharedKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (SharedKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(SharedKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface SharedKtor_client_coreProxyConfig : SharedBase
- (instancetype)initWithUrl:(SharedKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol SharedKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(SharedKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) SharedKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface SharedKtor_utilsAttributeKey<T> : SharedBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface SharedKtor_eventsEventDefinition<T> : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol SharedKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface SharedKtor_utilsPipelinePhase : SharedBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol SharedKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol SharedKotlinSuspendFunction2 <SharedKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface SharedKtor_client_coreHttpReceivePipelinePhases : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) SharedKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SharedKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol SharedKtor_httpHttpMessage
@required
@property (readonly) id<SharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface SharedKtor_client_coreHttpResponse : SharedBase <SharedKtor_httpHttpMessage, SharedKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<SharedKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) SharedKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) SharedKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) SharedKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface SharedKtor_client_coreHttpRequestPipelinePhases : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SharedKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) SharedKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) SharedKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) SharedKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol SharedKtor_httpHttpMessageBuilder
@required
@property (readonly) SharedKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface SharedKtor_client_coreHttpRequestBuilder : SharedBase <SharedKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (SharedKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<SharedKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<SharedKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<SharedKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (SharedKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(SharedKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (SharedKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(SharedKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(SharedKtor_httpURLBuilder *, SharedKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property SharedKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<SharedKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) SharedKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property SharedKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SharedKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface SharedKtor_client_coreHttpResponsePipelinePhases : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) SharedKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) SharedKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) SharedKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) SharedKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface SharedKtor_client_coreHttpResponseContainer : SharedBase
- (instancetype)initWithExpectedType:(SharedKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (SharedKtor_utilsTypeInfo *)component1 __attribute__((swift_name("component1()")));
- (id)component2 __attribute__((swift_name("component2()")));
- (SharedKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(SharedKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface SharedKtor_client_coreHttpClientCall : SharedBase <SharedKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(SharedKtor_client_coreHttpClient *)client requestData:(SharedKtor_client_coreHttpRequestData *)requestData responseData:(SharedKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(SharedKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(SharedKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<SharedKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SharedKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<SharedKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property SharedKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface SharedKtor_client_coreHttpSendPipelinePhases : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SharedKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) SharedKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) SharedKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) SharedKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SharedKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass provider:(id<SharedKotlinx_serialization_coreKSerializer> (^)(NSArray<id<SharedKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass serializer:(id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SharedKotlinKClass>)baseClass actualClass:(id<SharedKotlinKClass>)actualClass actualSerializer:(id<SharedKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<SharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<SharedKotlinKClass>)baseClass defaultSerializerProvider:(id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol SharedKotlinKClass <SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface SharedKtor_httpUrl : SharedBase
@property (class, readonly, getter=companion) SharedKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<SharedKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) SharedKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface SharedKtor_httpHttpMethod : SharedBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol SharedKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SharedKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol SharedKtor_httpHeaders <SharedKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface SharedKtor_httpOutgoingContent : SharedBase
- (id _Nullable)getPropertyKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(SharedKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<SharedKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) SharedLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) SharedKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<SharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SharedKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol SharedKotlinx_coroutines_coreJob <SharedKotlinCoroutineContextElement>
@required
- (id<SharedKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<SharedKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(SharedKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (SharedKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<SharedKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(SharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<SharedKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(SharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<SharedKotlinx_coroutines_coreJob>)plusOther_:(id<SharedKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<SharedKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<SharedKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface SharedKtor_httpHttpStatusCode : SharedBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (SharedKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface SharedKtor_utilsGMTDate : SharedBase <SharedKotlinComparable>
@property (class, readonly, getter=companion) SharedKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (SharedKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (SharedKtor_utilsMonth *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (SharedKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(SharedKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(SharedKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) SharedKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) SharedKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface SharedKtor_httpHttpProtocolVersion : SharedBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (SharedKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol SharedKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<SharedKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface SharedKotlinAbstractCoroutineContextKey<B, E> : SharedBase <SharedKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<SharedKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<SharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface SharedKotlinx_coroutines_coreCoroutineDispatcherKey : SharedKotlinAbstractCoroutineContextKey<id<SharedKotlinContinuationInterceptor>, SharedKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<SharedKotlinCoroutineContextKey>)baseKey safeCast:(id<SharedKotlinCoroutineContextElement> _Nullable (^)(id<SharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol SharedKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol SharedKtor_ioByteReadChannel
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(SharedLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(SharedKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(SharedLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(SharedKtor_ioChunkBuffer *)dst completionHandler:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(SharedKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(SharedKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(SharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(SharedByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(SharedDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(SharedFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(SharedKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(SharedKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(SharedLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(SharedKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(SharedKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<SharedKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(SharedShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<SharedKotlinSuspendFunction1>)consumer completionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<SharedKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(SharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) SharedKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol SharedKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<SharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<SharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<SharedKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SharedKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface SharedKtor_utilsStringValuesBuilderImpl : SharedBase <SharedKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<SharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<SharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<SharedKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SharedKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) SharedMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface SharedKtor_httpHeadersBuilder : SharedKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<SharedKtor_httpHeaders>)build __attribute__((swift_name("build()")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface SharedKtor_client_coreHttpRequestBuilderCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface SharedKtor_httpURLBuilder : SharedBase
- (instancetype)initWithProtocol:(SharedKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<SharedKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (SharedKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<SharedKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<SharedKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property SharedKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface SharedKtor_utilsTypeInfo : SharedBase
- (instancetype)initWithType:(id<SharedKotlinKClass>)type reifiedType:(id<SharedKotlinKType>)reifiedType kotlinType:(id<SharedKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (id<SharedKotlinKClass>)component1 __attribute__((swift_name("component1()")));
- (id<SharedKotlinKType>)component2 __attribute__((swift_name("component2()")));
- (id<SharedKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedKtor_utilsTypeInfo *)doCopyType:(id<SharedKotlinKClass>)type reifiedType:(id<SharedKotlinKType>)reifiedType kotlinType:(id<SharedKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<SharedKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<SharedKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface SharedKtor_client_coreHttpClientCallCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol SharedKtor_client_coreHttpRequest <SharedKtor_httpHttpMessage, SharedKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SharedKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) SharedKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) SharedKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SharedKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface SharedKtor_httpUrlCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol SharedKtor_httpParameters <SharedKtor_utilsStringValues>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface SharedKtor_httpURLProtocol : SharedBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (SharedKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface SharedKtor_httpHttpMethodCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<SharedKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) SharedKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) SharedKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) SharedKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) SharedKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) SharedKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) SharedKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) SharedKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol SharedKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface SharedKtor_httpHeaderValueWithParameters : SharedBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<SharedKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<SharedKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface SharedKtor_httpContentType : SharedKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<SharedKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<SharedKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(SharedKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (SharedKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (SharedKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol SharedKotlinx_coroutines_coreChildHandle <SharedKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(SharedKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<SharedKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol SharedKotlinx_coroutines_coreChildJob <SharedKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<SharedKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol SharedKotlinSequence
@required
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol SharedKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<SharedKotlinx_coroutines_coreSelectInstance>)select block:(id<SharedKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface SharedKtor_httpHttpStatusCodeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) SharedKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) SharedKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) SharedKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) SharedKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) SharedKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) SharedKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) SharedKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) SharedKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) SharedKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) SharedKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) SharedKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) SharedKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) SharedKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) SharedKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) SharedKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) SharedKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) SharedKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) SharedKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) SharedKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) SharedKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) SharedKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) SharedKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) SharedKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) SharedKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) SharedKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) SharedKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) SharedKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) SharedKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) SharedKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) SharedKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) SharedKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) SharedKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) SharedKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) SharedKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) SharedKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) SharedKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) SharedKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) SharedKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) SharedKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) SharedKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) SharedKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) SharedKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) SharedKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) SharedKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) SharedKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) SharedKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) SharedKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) SharedKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) SharedKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) SharedKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) SharedKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) SharedKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<SharedKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface SharedKtor_utilsGMTDateCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface SharedKtor_utilsWeekDay : SharedKotlinEnum<SharedKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) SharedKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) SharedKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) SharedKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) SharedKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) SharedKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) SharedKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (SharedKotlinArray<SharedKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface SharedKtor_utilsMonth : SharedKotlinEnum<SharedKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) SharedKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) SharedKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) SharedKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) SharedKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) SharedKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) SharedKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) SharedKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) SharedKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) SharedKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) SharedKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) SharedKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (SharedKotlinArray<SharedKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface SharedKtor_httpHttpProtocolVersionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (SharedKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface SharedKtor_ioMemory : SharedBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(SharedKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(SharedKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (SharedKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (SharedKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end;

__attribute__((swift_name("Ktor_ioBuffer")))
@interface SharedKtor_ioBuffer : SharedBase
- (instancetype)initWithMemory:(SharedKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (SharedKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)duplicateToCopy:(SharedKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) SharedKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end;

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface SharedKtor_ioChunkBuffer : SharedKtor_ioBuffer
- (instancetype)initWithMemory:(SharedKtor_ioMemory *)memory origin:(SharedKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<SharedKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(SharedKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (SharedKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (SharedKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<SharedKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) SharedKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) SharedKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end;

__attribute__((swift_name("Ktor_ioInput")))
@interface SharedKtor_ioInput : SharedBase <SharedKtor_ioCloseable>
- (instancetype)initWithHead:(SharedKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<SharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (SharedKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(SharedKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(SharedKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)peekToBuffer:(SharedKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<SharedKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<SharedKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<SharedKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface SharedKtor_ioByteReadPacket : SharedKtor_ioInput
- (instancetype)initWithHead:(SharedKtor_ioChunkBuffer *)head pool:(id<SharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(SharedKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<SharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (SharedKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));
- (SharedKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(SharedKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol SharedKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (SharedKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol SharedKotlinSuspendFunction1 <SharedKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol SharedKotlinAppendable
@required
- (id<SharedKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<SharedKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<SharedKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface SharedKtor_httpURLBuilderCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol SharedKtor_httpParametersBuilder <SharedKtor_utilsStringValuesBuilder>
@required
@end;

__attribute__((swift_name("KotlinKType")))
@protocol SharedKotlinKType
@required
@property (readonly) NSArray<SharedKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<SharedKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface SharedKtor_httpURLProtocolCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) SharedKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) SharedKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) SharedKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) SharedKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) SharedKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, SharedKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface SharedKtor_httpHeaderValueParam : SharedBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface SharedKtor_httpHeaderValueWithParametersCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<SharedKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface SharedKtor_httpContentTypeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) SharedKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol SharedKotlinx_coroutines_coreParentJob <SharedKotlinx_coroutines_coreJob>
@required
- (SharedKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol SharedKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<SharedKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(SharedKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(SharedKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<SharedKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol SharedKotlinSuspendFunction0 <SharedKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface SharedKtor_utilsWeekDayCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (SharedKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface SharedKtor_utilsMonthCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (SharedKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface SharedKtor_ioMemoryCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface SharedKtor_ioBufferCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol SharedKtor_ioObjectPool <SharedKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface SharedKtor_ioChunkBufferCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<SharedKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<SharedKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface SharedKtor_ioInputCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface SharedKtor_ioByteReadPacketCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface SharedKotlinKTypeProjection : SharedBase
- (instancetype)initWithVariance:(SharedKotlinKVariance * _Nullable)variance type:(id<SharedKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (SharedKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()")));
- (id<SharedKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedKotlinKTypeProjection *)doCopyVariance:(SharedKotlinKVariance * _Nullable)variance type:(id<SharedKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) SharedKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface SharedKotlinx_coroutines_coreAtomicDesc : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(SharedKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(SharedKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property SharedKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface SharedKotlinx_coroutines_coreOpDescriptor : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(SharedKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : SharedKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) SharedKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface SharedKotlinKVariance : SharedKotlinEnum<SharedKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) SharedKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) SharedKotlinKVariance *out __attribute__((swift_name("out")));
+ (SharedKotlinArray<SharedKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface SharedKotlinKTypeProjectionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (SharedKotlinKTypeProjection *)contravariantType:(id<SharedKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (SharedKotlinKTypeProjection *)covariantType:(id<SharedKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (SharedKotlinKTypeProjection *)invariantType:(id<SharedKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) SharedKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface SharedKotlinx_coroutines_coreAtomicOp<__contravariant T> : SharedKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) SharedKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface SharedKotlinx_coroutines_coreLockFreeLinkedListNode : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(SharedBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(SharedBoolean *(^)(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(SharedBoolean *(^)(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(SharedBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<SharedKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<SharedKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(SharedBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id next __attribute__((swift_name("next")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : SharedKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(SharedKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(SharedKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SharedKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SharedKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface SharedKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SharedKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
