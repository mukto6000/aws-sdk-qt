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

#ifndef QTAWS_SIGNERCLIENT_H
#define QTAWS_SIGNERCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace signer {

class signerClientPrivate;
class CancelSigningProfileRequest;
class CancelSigningProfileResponse;
class DescribeSigningJobRequest;
class DescribeSigningJobResponse;
class GetSigningPlatformRequest;
class GetSigningPlatformResponse;
class GetSigningProfileRequest;
class GetSigningProfileResponse;
class ListSigningJobsRequest;
class ListSigningJobsResponse;
class ListSigningPlatformsRequest;
class ListSigningPlatformsResponse;
class ListSigningProfilesRequest;
class ListSigningProfilesResponse;
class PutSigningProfileRequest;
class PutSigningProfileResponse;
class StartSigningJobRequest;
class StartSigningJobResponse;

class QTAWS_EXPORT signerClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    signerClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    signerClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelSigningProfileResponse * cancelSigningProfile(const CancelSigningProfileRequest &request);
    DescribeSigningJobResponse * describeSigningJob(const DescribeSigningJobRequest &request);
    GetSigningPlatformResponse * getSigningPlatform(const GetSigningPlatformRequest &request);
    GetSigningProfileResponse * getSigningProfile(const GetSigningProfileRequest &request);
    ListSigningJobsResponse * listSigningJobs(const ListSigningJobsRequest &request);
    ListSigningPlatformsResponse * listSigningPlatforms(const ListSigningPlatformsRequest &request);
    ListSigningProfilesResponse * listSigningProfiles(const ListSigningProfilesRequest &request);
    PutSigningProfileResponse * putSigningProfile(const PutSigningProfileRequest &request);
    StartSigningJobResponse * startSigningJob(const StartSigningJobRequest &request);

private:
    Q_DECLARE_PRIVATE(signerClient)
    Q_DISABLE_COPY(signerClient)

};

} // namespace signer
} // namespace QtAws

#endif
