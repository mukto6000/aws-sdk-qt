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

#include "runtaskresponse.h"
#include "runtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecs {

/*!
 * \class QtAws::Ecs::RunTaskResponse
 * \brief The RunTaskResponse class provides an interace for Ecs RunTask responses.
 *
 * \inmodule QtAwsEcs
 *
 *  <fullname>Amazon Elastic Container Service</fullname>
 * 
 *  Amazon Elastic Container Service (Amazon ECS) is a highly scalable, fast, container management service. It makes it easy
 *  to run, stop, and manage Docker containers. You can host your cluster on a serverless infrastructure that's managed by
 *  Amazon ECS by launching your services or tasks on Fargate. For more control, you can host your tasks on a cluster of
 *  Amazon Elastic Compute Cloud (Amazon EC2) or External (on-premises) instances that you
 * 
 *  manage>
 * 
 *  Amazon ECS makes it easy to launch and stop container-based applications with simple API calls. This makes it easy to
 *  get the state of your cluster from a centralized service, and gives you access to many familiar Amazon EC2
 * 
 *  features>
 * 
 *  You can use Amazon ECS to schedule the placement of containers across your cluster based on your resource needs,
 *  isolation policies, and availability requirements. With Amazon ECS, you don't need to operate your own cluster
 *  management and configuration management systems. You also don't need to worry about scaling your management
 *
 * \sa EcsClient::runTask
 */

/*!
 * Constructs a RunTaskResponse object for \a reply to \a request, with parent \a parent.
 */
RunTaskResponse::RunTaskResponse(
        const RunTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcsResponse(new RunTaskResponsePrivate(this), parent)
{
    setRequest(new RunTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RunTaskRequest * RunTaskResponse::request() const
{
    Q_D(const RunTaskResponse);
    return static_cast<const RunTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecs RunTask \a response.
 */
void RunTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RunTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecs::RunTaskResponsePrivate
 * \brief The RunTaskResponsePrivate class provides private implementation for RunTaskResponse.
 * \internal
 *
 * \inmodule QtAwsEcs
 */

/*!
 * Constructs a RunTaskResponsePrivate object with public implementation \a q.
 */
RunTaskResponsePrivate::RunTaskResponsePrivate(
    RunTaskResponse * const q) : EcsResponsePrivate(q)
{

}

/*!
 * Parses a Ecs RunTask response element from \a xml.
 */
void RunTaskResponsePrivate::parseRunTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RunTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecs
} // namespace QtAws
