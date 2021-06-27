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

#include "describereciperesponse.h"
#include "describereciperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::DescribeRecipeResponse
 * \brief The DescribeRecipeResponse class provides an interace for GlueDataBrew DescribeRecipe responses.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::describeRecipe
 */

/*!
 * Constructs a DescribeRecipeResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRecipeResponse::DescribeRecipeResponse(
        const DescribeRecipeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueDataBrewResponse(new DescribeRecipeResponsePrivate(this), parent)
{
    setRequest(new DescribeRecipeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRecipeRequest * DescribeRecipeResponse::request() const
{
    return static_cast<const DescribeRecipeRequest *>(GlueDataBrewResponse::request());
}

/*!
 * \reimp
 * Parses a successful GlueDataBrew DescribeRecipe \a response.
 */
void DescribeRecipeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRecipeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GlueDataBrew::DescribeRecipeResponsePrivate
 * \brief The DescribeRecipeResponsePrivate class provides private implementation for DescribeRecipeResponse.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a DescribeRecipeResponsePrivate object with public implementation \a q.
 */
DescribeRecipeResponsePrivate::DescribeRecipeResponsePrivate(
    DescribeRecipeResponse * const q) : GlueDataBrewResponsePrivate(q)
{

}

/*!
 * Parses a GlueDataBrew DescribeRecipe response element from \a xml.
 */
void DescribeRecipeResponsePrivate::parseDescribeRecipeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRecipeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GlueDataBrew
} // namespace QtAws
