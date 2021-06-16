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

#include "deletecomputeenvironmentresponse.h"
#include "deletecomputeenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::DeleteComputeEnvironmentResponse
 * \brief The DeleteComputeEnvironmentResponse class provides an interace for Batch DeleteComputeEnvironment responses.
 *
 * \inmodule QtAwsBatch
 *
 *  AWS Batch enables you to run batch computing workloads on the AWS Cloud. Batch computing is a common way for developers,
 *  scientists, and engineers to access large amounts of compute resources, and AWS Batch removes the undifferentiated heavy
 *  lifting of configuring and managing the required infrastructure. AWS Batch will be familiar to users of traditional
 *  batch computing software. This service can efficiently provision resources in response to jobs submitted in order to
 *  eliminate capacity constraints, reduce compute costs, and deliver results
 * 
 *  quickly>
 * 
 *  As a fully managed service, AWS Batch enables developers, scientists, and engineers to run batch computing workloads of
 *  any scale. AWS Batch automatically provisions compute resources and optimizes the workload distribution based on the
 *  quantity and scale of the workloads. With AWS Batch, there is no need to install or manage batch computing software,
 *  which allows you to focus on analyzing results and solving problems. AWS Batch reduces operational complexities, saves
 *  time, and reduces costs, which makes it easy for developers, scientists, and engineers to run their batch jobs in the
 *  AWS
 *
 * \sa BatchClient::deleteComputeEnvironment
 */

/*!
 * Constructs a DeleteComputeEnvironmentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteComputeEnvironmentResponse::DeleteComputeEnvironmentResponse(
        const DeleteComputeEnvironmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new DeleteComputeEnvironmentResponsePrivate(this), parent)
{
    setRequest(new DeleteComputeEnvironmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteComputeEnvironmentRequest * DeleteComputeEnvironmentResponse::request() const
{
    Q_D(const DeleteComputeEnvironmentResponse);
    return static_cast<const DeleteComputeEnvironmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Batch DeleteComputeEnvironment \a response.
 */
void DeleteComputeEnvironmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteComputeEnvironmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Batch::DeleteComputeEnvironmentResponsePrivate
 * \brief The DeleteComputeEnvironmentResponsePrivate class provides private implementation for DeleteComputeEnvironmentResponse.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a DeleteComputeEnvironmentResponsePrivate object with public implementation \a q.
 */
DeleteComputeEnvironmentResponsePrivate::DeleteComputeEnvironmentResponsePrivate(
    DeleteComputeEnvironmentResponse * const q) : BatchResponsePrivate(q)
{

}

/*!
 * Parses a Batch DeleteComputeEnvironment response element from \a xml.
 */
void DeleteComputeEnvironmentResponsePrivate::parseDeleteComputeEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteComputeEnvironmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Batch
} // namespace QtAws
