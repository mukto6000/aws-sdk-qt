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

#include "describenotebookinstanceresponse.h"
#include "describenotebookinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeNotebookInstanceResponse
 * \brief The DescribeNotebookInstanceResponse class provides an interace for SageMaker DescribeNotebookInstance responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::describeNotebookInstance
 */

/*!
 * Constructs a DescribeNotebookInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeNotebookInstanceResponse::DescribeNotebookInstanceResponse(
        const DescribeNotebookInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeNotebookInstanceResponsePrivate(this), parent)
{
    setRequest(new DescribeNotebookInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeNotebookInstanceRequest * DescribeNotebookInstanceResponse::request() const
{
    Q_D(const DescribeNotebookInstanceResponse);
    return static_cast<const DescribeNotebookInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeNotebookInstance \a response.
 */
void DescribeNotebookInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeNotebookInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeNotebookInstanceResponsePrivate
 * \brief The DescribeNotebookInstanceResponsePrivate class provides private implementation for DescribeNotebookInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeNotebookInstanceResponsePrivate object with public implementation \a q.
 */
DescribeNotebookInstanceResponsePrivate::DescribeNotebookInstanceResponsePrivate(
    DescribeNotebookInstanceResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeNotebookInstance response element from \a xml.
 */
void DescribeNotebookInstanceResponsePrivate::parseDescribeNotebookInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNotebookInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
