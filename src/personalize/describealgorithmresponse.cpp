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

#include "describealgorithmresponse.h"
#include "describealgorithmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeAlgorithmResponse
 * \brief The DescribeAlgorithmResponse class provides an interace for Personalize DescribeAlgorithm responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeAlgorithm
 */

/*!
 * Constructs a DescribeAlgorithmResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAlgorithmResponse::DescribeAlgorithmResponse(
        const DescribeAlgorithmRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DescribeAlgorithmResponsePrivate(this), parent)
{
    setRequest(new DescribeAlgorithmRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAlgorithmRequest * DescribeAlgorithmResponse::request() const
{
    return static_cast<const DescribeAlgorithmRequest *>(PersonalizeResponse::request());
}

/*!
 * \reimp
 * Parses a successful Personalize DescribeAlgorithm \a response.
 */
void DescribeAlgorithmResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAlgorithmResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DescribeAlgorithmResponsePrivate
 * \brief The DescribeAlgorithmResponsePrivate class provides private implementation for DescribeAlgorithmResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeAlgorithmResponsePrivate object with public implementation \a q.
 */
DescribeAlgorithmResponsePrivate::DescribeAlgorithmResponsePrivate(
    DescribeAlgorithmResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DescribeAlgorithm response element from \a xml.
 */
void DescribeAlgorithmResponsePrivate::parseDescribeAlgorithmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAlgorithmResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
