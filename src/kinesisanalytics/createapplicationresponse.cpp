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

#include "createapplicationresponse.h"
#include "createapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::CreateApplicationResponse
 * \brief The CreateApplicationResponse class provides an interace for KinesisAnalytics CreateApplication responses.
 *
 * \inmodule QtAwsKinesisAnalytics
 *
 *  <fullname>Amazon Kinesis Analytics</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p <note>
 * 
 *  This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 *  Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 *  href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 * 
 *  Documentation</a>> </note>
 * 
 *  This is the <i>Amazon Kinesis Analytics v1 API Reference</i>. The Amazon Kinesis Analytics Developer Guide provides
 *  additional information.
 *
 * \sa KinesisAnalyticsClient::createApplication
 */

/*!
 * Constructs a CreateApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateApplicationResponse::CreateApplicationResponse(
        const CreateApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new CreateApplicationResponsePrivate(this), parent)
{
    setRequest(new CreateApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateApplicationRequest * CreateApplicationResponse::request() const
{
    Q_D(const CreateApplicationResponse);
    return static_cast<const CreateApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalytics CreateApplication \a response.
 */
void CreateApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalytics::CreateApplicationResponsePrivate
 * \brief The CreateApplicationResponsePrivate class provides private implementation for CreateApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a CreateApplicationResponsePrivate object with public implementation \a q.
 */
CreateApplicationResponsePrivate::CreateApplicationResponsePrivate(
    CreateApplicationResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalytics CreateApplication response element from \a xml.
 */
void CreateApplicationResponsePrivate::parseCreateApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
