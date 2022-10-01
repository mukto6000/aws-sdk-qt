// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereleaselabelresponse.h"
#include "describereleaselabelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::DescribeReleaseLabelResponse
 * \brief The DescribeReleaseLabelResponse class provides an interace for Emr DescribeReleaseLabel responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::describeReleaseLabel
 */

/*!
 * Constructs a DescribeReleaseLabelResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReleaseLabelResponse::DescribeReleaseLabelResponse(
        const DescribeReleaseLabelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new DescribeReleaseLabelResponsePrivate(this), parent)
{
    setRequest(new DescribeReleaseLabelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReleaseLabelRequest * DescribeReleaseLabelResponse::request() const
{
    Q_D(const DescribeReleaseLabelResponse);
    return static_cast<const DescribeReleaseLabelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr DescribeReleaseLabel \a response.
 */
void DescribeReleaseLabelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReleaseLabelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::DescribeReleaseLabelResponsePrivate
 * \brief The DescribeReleaseLabelResponsePrivate class provides private implementation for DescribeReleaseLabelResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a DescribeReleaseLabelResponsePrivate object with public implementation \a q.
 */
DescribeReleaseLabelResponsePrivate::DescribeReleaseLabelResponsePrivate(
    DescribeReleaseLabelResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr DescribeReleaseLabel response element from \a xml.
 */
void DescribeReleaseLabelResponsePrivate::parseDescribeReleaseLabelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReleaseLabelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
