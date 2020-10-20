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

#include "runjobflowresponse.h"
#include "runjobflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::RunJobFlowResponse
 * \brief The RunJobFlowResponse class provides an interace for EMR RunJobFlow responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EmrClient::runJobFlow
 */

/*!
 * Constructs a RunJobFlowResponse object for \a reply to \a request, with parent \a parent.
 */
RunJobFlowResponse::RunJobFlowResponse(
        const RunJobFlowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new RunJobFlowResponsePrivate(this), parent)
{
    setRequest(new RunJobFlowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RunJobFlowRequest * RunJobFlowResponse::request() const
{
    Q_D(const RunJobFlowResponse);
    return static_cast<const RunJobFlowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EMR RunJobFlow \a response.
 */
void RunJobFlowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RunJobFlowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::RunJobFlowResponsePrivate
 * \brief The RunJobFlowResponsePrivate class provides private implementation for RunJobFlowResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a RunJobFlowResponsePrivate object with public implementation \a q.
 */
RunJobFlowResponsePrivate::RunJobFlowResponsePrivate(
    RunJobFlowResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR RunJobFlow response element from \a xml.
 */
void RunJobFlowResponsePrivate::parseRunJobFlowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RunJobFlowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EMR
} // namespace QtAws
