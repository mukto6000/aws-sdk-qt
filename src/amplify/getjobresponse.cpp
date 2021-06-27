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

#include "getjobresponse.h"
#include "getjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::GetJobResponse
 * \brief The GetJobResponse class provides an interace for Amplify GetJob responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::getJob
 */

/*!
 * Constructs a GetJobResponse object for \a reply to \a request, with parent \a parent.
 */
GetJobResponse::GetJobResponse(
        const GetJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new GetJobResponsePrivate(this), parent)
{
    setRequest(new GetJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetJobRequest * GetJobResponse::request() const
{
    return static_cast<const GetJobRequest *>(AmplifyResponse::request());
}

/*!
 * \reimp
 * Parses a successful Amplify GetJob \a response.
 */
void GetJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::GetJobResponsePrivate
 * \brief The GetJobResponsePrivate class provides private implementation for GetJobResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a GetJobResponsePrivate object with public implementation \a q.
 */
GetJobResponsePrivate::GetJobResponsePrivate(
    GetJobResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify GetJob response element from \a xml.
 */
void GetJobResponsePrivate::parseGetJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
