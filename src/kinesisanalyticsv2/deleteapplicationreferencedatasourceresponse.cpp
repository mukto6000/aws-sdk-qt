// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapplicationreferencedatasourceresponse.h"
#include "deleteapplicationreferencedatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationReferenceDataSourceResponse
 * \brief The DeleteApplicationReferenceDataSourceResponse class provides an interace for KinesisAnalyticsV2 DeleteApplicationReferenceDataSource responses.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::deleteApplicationReferenceDataSource
 */

/*!
 * Constructs a DeleteApplicationReferenceDataSourceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApplicationReferenceDataSourceResponse::DeleteApplicationReferenceDataSourceResponse(
        const DeleteApplicationReferenceDataSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsV2Response(new DeleteApplicationReferenceDataSourceResponsePrivate(this), parent)
{
    setRequest(new DeleteApplicationReferenceDataSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApplicationReferenceDataSourceRequest * DeleteApplicationReferenceDataSourceResponse::request() const
{
    Q_D(const DeleteApplicationReferenceDataSourceResponse);
    return static_cast<const DeleteApplicationReferenceDataSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalyticsV2 DeleteApplicationReferenceDataSource \a response.
 */
void DeleteApplicationReferenceDataSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApplicationReferenceDataSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationReferenceDataSourceResponsePrivate
 * \brief The DeleteApplicationReferenceDataSourceResponsePrivate class provides private implementation for DeleteApplicationReferenceDataSourceResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a DeleteApplicationReferenceDataSourceResponsePrivate object with public implementation \a q.
 */
DeleteApplicationReferenceDataSourceResponsePrivate::DeleteApplicationReferenceDataSourceResponsePrivate(
    DeleteApplicationReferenceDataSourceResponse * const q) : KinesisAnalyticsV2ResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalyticsV2 DeleteApplicationReferenceDataSource response element from \a xml.
 */
void DeleteApplicationReferenceDataSourceResponsePrivate::parseDeleteApplicationReferenceDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApplicationReferenceDataSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
