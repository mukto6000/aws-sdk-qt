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

#include "batchdeleterecipeversionresponse.h"
#include "batchdeleterecipeversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::BatchDeleteRecipeVersionResponse
 * \brief The BatchDeleteRecipeVersionResponse class provides an interace for DataBrew BatchDeleteRecipeVersion responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::batchDeleteRecipeVersion
 */

/*!
 * Constructs a BatchDeleteRecipeVersionResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDeleteRecipeVersionResponse::BatchDeleteRecipeVersionResponse(
        const BatchDeleteRecipeVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new BatchDeleteRecipeVersionResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteRecipeVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDeleteRecipeVersionRequest * BatchDeleteRecipeVersionResponse::request() const
{
    Q_D(const BatchDeleteRecipeVersionResponse);
    return static_cast<const BatchDeleteRecipeVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew BatchDeleteRecipeVersion \a response.
 */
void BatchDeleteRecipeVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDeleteRecipeVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::BatchDeleteRecipeVersionResponsePrivate
 * \brief The BatchDeleteRecipeVersionResponsePrivate class provides private implementation for BatchDeleteRecipeVersionResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a BatchDeleteRecipeVersionResponsePrivate object with public implementation \a q.
 */
BatchDeleteRecipeVersionResponsePrivate::BatchDeleteRecipeVersionResponsePrivate(
    BatchDeleteRecipeVersionResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew BatchDeleteRecipeVersion response element from \a xml.
 */
void BatchDeleteRecipeVersionResponsePrivate::parseBatchDeleteRecipeVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteRecipeVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
