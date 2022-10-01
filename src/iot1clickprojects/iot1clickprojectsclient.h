// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOT1CLICKPROJECTSCLIENT_H
#define QTAWS_IOT1CLICKPROJECTSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsiot1clickprojectsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace IoT1ClickProjects {

class IoT1ClickProjectsClientPrivate;
class AssociateDeviceWithPlacementRequest;
class AssociateDeviceWithPlacementResponse;
class CreatePlacementRequest;
class CreatePlacementResponse;
class CreateProjectRequest;
class CreateProjectResponse;
class DeletePlacementRequest;
class DeletePlacementResponse;
class DeleteProjectRequest;
class DeleteProjectResponse;
class DescribePlacementRequest;
class DescribePlacementResponse;
class DescribeProjectRequest;
class DescribeProjectResponse;
class DisassociateDeviceFromPlacementRequest;
class DisassociateDeviceFromPlacementResponse;
class GetDevicesInPlacementRequest;
class GetDevicesInPlacementResponse;
class ListPlacementsRequest;
class ListPlacementsResponse;
class ListProjectsRequest;
class ListProjectsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdatePlacementRequest;
class UpdatePlacementResponse;
class UpdateProjectRequest;
class UpdateProjectResponse;

class QTAWSIOT1CLICKPROJECTS_EXPORT IoT1ClickProjectsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    IoT1ClickProjectsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit IoT1ClickProjectsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateDeviceWithPlacementResponse * associateDeviceWithPlacement(const AssociateDeviceWithPlacementRequest &request);
    CreatePlacementResponse * createPlacement(const CreatePlacementRequest &request);
    CreateProjectResponse * createProject(const CreateProjectRequest &request);
    DeletePlacementResponse * deletePlacement(const DeletePlacementRequest &request);
    DeleteProjectResponse * deleteProject(const DeleteProjectRequest &request);
    DescribePlacementResponse * describePlacement(const DescribePlacementRequest &request);
    DescribeProjectResponse * describeProject(const DescribeProjectRequest &request);
    DisassociateDeviceFromPlacementResponse * disassociateDeviceFromPlacement(const DisassociateDeviceFromPlacementRequest &request);
    GetDevicesInPlacementResponse * getDevicesInPlacement(const GetDevicesInPlacementRequest &request);
    ListPlacementsResponse * listPlacements(const ListPlacementsRequest &request);
    ListProjectsResponse * listProjects(const ListProjectsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdatePlacementResponse * updatePlacement(const UpdatePlacementRequest &request);
    UpdateProjectResponse * updateProject(const UpdateProjectRequest &request);

private:
    Q_DECLARE_PRIVATE(IoT1ClickProjectsClient)
    Q_DISABLE_COPY(IoT1ClickProjectsClient)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
