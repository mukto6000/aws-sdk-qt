/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_PINPOINTCLIENT_H
#define QTAWS_PINPOINTCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Pinpoint {

class PinpointClientPrivate;
class CreateAppRequest;
class CreateAppResponse;
class CreateCampaignRequest;
class CreateCampaignResponse;
class CreateExportJobRequest;
class CreateExportJobResponse;
class CreateImportJobRequest;
class CreateImportJobResponse;
class CreateSegmentRequest;
class CreateSegmentResponse;
class DeleteAdmChannelRequest;
class DeleteAdmChannelResponse;
class DeleteApnsChannelRequest;
class DeleteApnsChannelResponse;
class DeleteApnsSandboxChannelRequest;
class DeleteApnsSandboxChannelResponse;
class DeleteApnsVoipChannelRequest;
class DeleteApnsVoipChannelResponse;
class DeleteApnsVoipSandboxChannelRequest;
class DeleteApnsVoipSandboxChannelResponse;
class DeleteAppRequest;
class DeleteAppResponse;
class DeleteBaiduChannelRequest;
class DeleteBaiduChannelResponse;
class DeleteCampaignRequest;
class DeleteCampaignResponse;
class DeleteEmailChannelRequest;
class DeleteEmailChannelResponse;
class DeleteEndpointRequest;
class DeleteEndpointResponse;
class DeleteEventStreamRequest;
class DeleteEventStreamResponse;
class DeleteGcmChannelRequest;
class DeleteGcmChannelResponse;
class DeleteSegmentRequest;
class DeleteSegmentResponse;
class DeleteSmsChannelRequest;
class DeleteSmsChannelResponse;
class DeleteUserEndpointsRequest;
class DeleteUserEndpointsResponse;
class DeleteVoiceChannelRequest;
class DeleteVoiceChannelResponse;
class GetAdmChannelRequest;
class GetAdmChannelResponse;
class GetApnsChannelRequest;
class GetApnsChannelResponse;
class GetApnsSandboxChannelRequest;
class GetApnsSandboxChannelResponse;
class GetApnsVoipChannelRequest;
class GetApnsVoipChannelResponse;
class GetApnsVoipSandboxChannelRequest;
class GetApnsVoipSandboxChannelResponse;
class GetAppRequest;
class GetAppResponse;
class GetApplicationSettingsRequest;
class GetApplicationSettingsResponse;
class GetAppsRequest;
class GetAppsResponse;
class GetBaiduChannelRequest;
class GetBaiduChannelResponse;
class GetCampaignRequest;
class GetCampaignResponse;
class GetCampaignActivitiesRequest;
class GetCampaignActivitiesResponse;
class GetCampaignVersionRequest;
class GetCampaignVersionResponse;
class GetCampaignVersionsRequest;
class GetCampaignVersionsResponse;
class GetCampaignsRequest;
class GetCampaignsResponse;
class GetChannelsRequest;
class GetChannelsResponse;
class GetEmailChannelRequest;
class GetEmailChannelResponse;
class GetEndpointRequest;
class GetEndpointResponse;
class GetEventStreamRequest;
class GetEventStreamResponse;
class GetExportJobRequest;
class GetExportJobResponse;
class GetExportJobsRequest;
class GetExportJobsResponse;
class GetGcmChannelRequest;
class GetGcmChannelResponse;
class GetImportJobRequest;
class GetImportJobResponse;
class GetImportJobsRequest;
class GetImportJobsResponse;
class GetSegmentRequest;
class GetSegmentResponse;
class GetSegmentExportJobsRequest;
class GetSegmentExportJobsResponse;
class GetSegmentImportJobsRequest;
class GetSegmentImportJobsResponse;
class GetSegmentVersionRequest;
class GetSegmentVersionResponse;
class GetSegmentVersionsRequest;
class GetSegmentVersionsResponse;
class GetSegmentsRequest;
class GetSegmentsResponse;
class GetSmsChannelRequest;
class GetSmsChannelResponse;
class GetUserEndpointsRequest;
class GetUserEndpointsResponse;
class GetVoiceChannelRequest;
class GetVoiceChannelResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PhoneNumberValidateRequest;
class PhoneNumberValidateResponse;
class PutEventStreamRequest;
class PutEventStreamResponse;
class PutEventsRequest;
class PutEventsResponse;
class RemoveAttributesRequest;
class RemoveAttributesResponse;
class SendMessagesRequest;
class SendMessagesResponse;
class SendUsersMessagesRequest;
class SendUsersMessagesResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAdmChannelRequest;
class UpdateAdmChannelResponse;
class UpdateApnsChannelRequest;
class UpdateApnsChannelResponse;
class UpdateApnsSandboxChannelRequest;
class UpdateApnsSandboxChannelResponse;
class UpdateApnsVoipChannelRequest;
class UpdateApnsVoipChannelResponse;
class UpdateApnsVoipSandboxChannelRequest;
class UpdateApnsVoipSandboxChannelResponse;
class UpdateApplicationSettingsRequest;
class UpdateApplicationSettingsResponse;
class UpdateBaiduChannelRequest;
class UpdateBaiduChannelResponse;
class UpdateCampaignRequest;
class UpdateCampaignResponse;
class UpdateEmailChannelRequest;
class UpdateEmailChannelResponse;
class UpdateEndpointRequest;
class UpdateEndpointResponse;
class UpdateEndpointsBatchRequest;
class UpdateEndpointsBatchResponse;
class UpdateGcmChannelRequest;
class UpdateGcmChannelResponse;
class UpdateSegmentRequest;
class UpdateSegmentResponse;
class UpdateSmsChannelRequest;
class UpdateSmsChannelResponse;
class UpdateVoiceChannelRequest;
class UpdateVoiceChannelResponse;

class QTAWS_EXPORT PinpointClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    PinpointClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    PinpointClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateAppResponse * createApp(const CreateAppRequest &request);
    CreateCampaignResponse * createCampaign(const CreateCampaignRequest &request);
    CreateExportJobResponse * createExportJob(const CreateExportJobRequest &request);
    CreateImportJobResponse * createImportJob(const CreateImportJobRequest &request);
    CreateSegmentResponse * createSegment(const CreateSegmentRequest &request);
    DeleteAdmChannelResponse * deleteAdmChannel(const DeleteAdmChannelRequest &request);
    DeleteApnsChannelResponse * deleteApnsChannel(const DeleteApnsChannelRequest &request);
    DeleteApnsSandboxChannelResponse * deleteApnsSandboxChannel(const DeleteApnsSandboxChannelRequest &request);
    DeleteApnsVoipChannelResponse * deleteApnsVoipChannel(const DeleteApnsVoipChannelRequest &request);
    DeleteApnsVoipSandboxChannelResponse * deleteApnsVoipSandboxChannel(const DeleteApnsVoipSandboxChannelRequest &request);
    DeleteAppResponse * deleteApp(const DeleteAppRequest &request);
    DeleteBaiduChannelResponse * deleteBaiduChannel(const DeleteBaiduChannelRequest &request);
    DeleteCampaignResponse * deleteCampaign(const DeleteCampaignRequest &request);
    DeleteEmailChannelResponse * deleteEmailChannel(const DeleteEmailChannelRequest &request);
    DeleteEndpointResponse * deleteEndpoint(const DeleteEndpointRequest &request);
    DeleteEventStreamResponse * deleteEventStream(const DeleteEventStreamRequest &request);
    DeleteGcmChannelResponse * deleteGcmChannel(const DeleteGcmChannelRequest &request);
    DeleteSegmentResponse * deleteSegment(const DeleteSegmentRequest &request);
    DeleteSmsChannelResponse * deleteSmsChannel(const DeleteSmsChannelRequest &request);
    DeleteUserEndpointsResponse * deleteUserEndpoints(const DeleteUserEndpointsRequest &request);
    DeleteVoiceChannelResponse * deleteVoiceChannel(const DeleteVoiceChannelRequest &request);
    GetAdmChannelResponse * getAdmChannel(const GetAdmChannelRequest &request);
    GetApnsChannelResponse * getApnsChannel(const GetApnsChannelRequest &request);
    GetApnsSandboxChannelResponse * getApnsSandboxChannel(const GetApnsSandboxChannelRequest &request);
    GetApnsVoipChannelResponse * getApnsVoipChannel(const GetApnsVoipChannelRequest &request);
    GetApnsVoipSandboxChannelResponse * getApnsVoipSandboxChannel(const GetApnsVoipSandboxChannelRequest &request);
    GetAppResponse * getApp(const GetAppRequest &request);
    GetApplicationSettingsResponse * getApplicationSettings(const GetApplicationSettingsRequest &request);
    GetAppsResponse * getApps(const GetAppsRequest &request);
    GetBaiduChannelResponse * getBaiduChannel(const GetBaiduChannelRequest &request);
    GetCampaignResponse * getCampaign(const GetCampaignRequest &request);
    GetCampaignActivitiesResponse * getCampaignActivities(const GetCampaignActivitiesRequest &request);
    GetCampaignVersionResponse * getCampaignVersion(const GetCampaignVersionRequest &request);
    GetCampaignVersionsResponse * getCampaignVersions(const GetCampaignVersionsRequest &request);
    GetCampaignsResponse * getCampaigns(const GetCampaignsRequest &request);
    GetChannelsResponse * getChannels(const GetChannelsRequest &request);
    GetEmailChannelResponse * getEmailChannel(const GetEmailChannelRequest &request);
    GetEndpointResponse * getEndpoint(const GetEndpointRequest &request);
    GetEventStreamResponse * getEventStream(const GetEventStreamRequest &request);
    GetExportJobResponse * getExportJob(const GetExportJobRequest &request);
    GetExportJobsResponse * getExportJobs(const GetExportJobsRequest &request);
    GetGcmChannelResponse * getGcmChannel(const GetGcmChannelRequest &request);
    GetImportJobResponse * getImportJob(const GetImportJobRequest &request);
    GetImportJobsResponse * getImportJobs(const GetImportJobsRequest &request);
    GetSegmentResponse * getSegment(const GetSegmentRequest &request);
    GetSegmentExportJobsResponse * getSegmentExportJobs(const GetSegmentExportJobsRequest &request);
    GetSegmentImportJobsResponse * getSegmentImportJobs(const GetSegmentImportJobsRequest &request);
    GetSegmentVersionResponse * getSegmentVersion(const GetSegmentVersionRequest &request);
    GetSegmentVersionsResponse * getSegmentVersions(const GetSegmentVersionsRequest &request);
    GetSegmentsResponse * getSegments(const GetSegmentsRequest &request);
    GetSmsChannelResponse * getSmsChannel(const GetSmsChannelRequest &request);
    GetUserEndpointsResponse * getUserEndpoints(const GetUserEndpointsRequest &request);
    GetVoiceChannelResponse * getVoiceChannel(const GetVoiceChannelRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PhoneNumberValidateResponse * phoneNumberValidate(const PhoneNumberValidateRequest &request);
    PutEventStreamResponse * putEventStream(const PutEventStreamRequest &request);
    PutEventsResponse * putEvents(const PutEventsRequest &request);
    RemoveAttributesResponse * removeAttributes(const RemoveAttributesRequest &request);
    SendMessagesResponse * sendMessages(const SendMessagesRequest &request);
    SendUsersMessagesResponse * sendUsersMessages(const SendUsersMessagesRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAdmChannelResponse * updateAdmChannel(const UpdateAdmChannelRequest &request);
    UpdateApnsChannelResponse * updateApnsChannel(const UpdateApnsChannelRequest &request);
    UpdateApnsSandboxChannelResponse * updateApnsSandboxChannel(const UpdateApnsSandboxChannelRequest &request);
    UpdateApnsVoipChannelResponse * updateApnsVoipChannel(const UpdateApnsVoipChannelRequest &request);
    UpdateApnsVoipSandboxChannelResponse * updateApnsVoipSandboxChannel(const UpdateApnsVoipSandboxChannelRequest &request);
    UpdateApplicationSettingsResponse * updateApplicationSettings(const UpdateApplicationSettingsRequest &request);
    UpdateBaiduChannelResponse * updateBaiduChannel(const UpdateBaiduChannelRequest &request);
    UpdateCampaignResponse * updateCampaign(const UpdateCampaignRequest &request);
    UpdateEmailChannelResponse * updateEmailChannel(const UpdateEmailChannelRequest &request);
    UpdateEndpointResponse * updateEndpoint(const UpdateEndpointRequest &request);
    UpdateEndpointsBatchResponse * updateEndpointsBatch(const UpdateEndpointsBatchRequest &request);
    UpdateGcmChannelResponse * updateGcmChannel(const UpdateGcmChannelRequest &request);
    UpdateSegmentResponse * updateSegment(const UpdateSegmentRequest &request);
    UpdateSmsChannelResponse * updateSmsChannel(const UpdateSmsChannelRequest &request);
    UpdateVoiceChannelResponse * updateVoiceChannel(const UpdateVoiceChannelRequest &request);

private:
    Q_DECLARE_PRIVATE(PinpointClient)
    Q_DISABLE_COPY(PinpointClient)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
