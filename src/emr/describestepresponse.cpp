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

#include "describestepresponse.h"
#include "describestepresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::DescribeStepResponse
 * \brief The DescribeStepResponse class provides an interace for Emr DescribeStep responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::describeStep
 */

/*!
 * Constructs a DescribeStepResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeStepResponse::DescribeStepResponse(
        const DescribeStepRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new DescribeStepResponsePrivate(this), parent)
{
    setRequest(new DescribeStepRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeStepRequest * DescribeStepResponse::request() const
{
    Q_D(const DescribeStepResponse);
    return static_cast<const DescribeStepRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr DescribeStep \a response.
 */
void DescribeStepResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeStepResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::DescribeStepResponsePrivate
 * \brief The DescribeStepResponsePrivate class provides private implementation for DescribeStepResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a DescribeStepResponsePrivate object with public implementation \a q.
 */
DescribeStepResponsePrivate::DescribeStepResponsePrivate(
    DescribeStepResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr DescribeStep response element from \a xml.
 */
void DescribeStepResponsePrivate::parseDescribeStepResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStepResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
