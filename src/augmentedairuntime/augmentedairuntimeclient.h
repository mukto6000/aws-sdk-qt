/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_AUGMENTEDAIRUNTIMECLIENT_H
#define QTAWS_AUGMENTEDAIRUNTIMECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsaugmentedairuntimeglobal.h"

class QNetworkReply;

namespace QtAws {
namespace AugmentedAIRuntime {

class AugmentedAIRuntimeClientPrivate;
class DeleteHumanLoopRequest;
class DeleteHumanLoopResponse;
class DescribeHumanLoopRequest;
class DescribeHumanLoopResponse;
class ListHumanLoopsRequest;
class ListHumanLoopsResponse;
class StartHumanLoopRequest;
class StartHumanLoopResponse;
class StopHumanLoopRequest;
class StopHumanLoopResponse;

class QTAWSAUGMENTEDAIRUNTIME_EXPORT AugmentedAIRuntimeClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AugmentedAIRuntimeClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit AugmentedAIRuntimeClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeleteHumanLoopResponse * deleteHumanLoop(const DeleteHumanLoopRequest &request);
    DescribeHumanLoopResponse * describeHumanLoop(const DescribeHumanLoopRequest &request);
    ListHumanLoopsResponse * listHumanLoops(const ListHumanLoopsRequest &request);
    StartHumanLoopResponse * startHumanLoop(const StartHumanLoopRequest &request);
    StopHumanLoopResponse * stopHumanLoop(const StopHumanLoopRequest &request);

protected:
    /// @cond internal
    AugmentedAIRuntimeClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit AugmentedAIRuntimeClient(AugmentedAIRuntimeClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(AugmentedAIRuntimeClient)
    Q_DISABLE_COPY(AugmentedAIRuntimeClient)

};

} // namespace AugmentedAIRuntime
} // namespace QtAws

#endif
